#include <cpu/smp.h>
#include <cpu_features.h>
#include <cpuid.h>
#include <cpu/msr.h>
#include <cpu/cr.h>
#include <sys/prcb.h>
#include <klibc/vec.h>
#include <debug/debug.h>
#include <sys/gdt.h>
#include <mem/liballoc.h>
#include <mm/pmm.h>
#include <mm/vmm.h>
#include <sys/apic.h>
#include <klibc/mem.h>
#include <sys/timer.h>
#include <sys/isr.h>
#include <sys/halt.h>

struct prcb **prcbs;
uint8_t bsp_lapic_core;
uint64_t cpu_count = 0;
bool is_smp = false;

char prcb_names[21][3] = {
	"Aa",
	"Ab",
	"E",
	"H",
	"Ua",
	"Ub",
	"Z",
	"F",
	"Ga",
	"Gb",
	"Gc",
	"Gd",
	"Ja",
	"Jb",
	"Na",
	"Nb",
	"Ra",
	"Rb",
	"T",
	"V",
	"Y"
};

static void smp_set_gs(uint64_t address) {
	wrmsr(0xc0000101, address);
}
static uint64_t smp_read_gs(void) {
    return rdmsr(0xc0000101);
}

static void smp_init_core(struct stivale2_smp_info *smp_info) {
	gdt_init();
	isr_install();
	// SSE/SSE2
	uint64_t cr0 = 0;
	cr0 = read_cr("0");
	cr0 &= ~(1 << 2);
	cr0 |= (1 << 1);
	write_cr("0", cr0);

	uint64_t cr4 = 0;
	cr4 = read_cr("4");
	cr4 |= (3 << 9);
	write_cr("4", cr4);

	// Security features

	uint32_t a = 0, b = 0, c = 0, d = 0;
	if (__get_cpuid(7, &a, &b, &c, &d)) {
		if ((b & CPUID_SMEP)) {
			cr4 = read_cr("4");
			cr4 |= (1 << 20); // Enable SMEP
			write_cr("4", cr4);
		}
	}

	if (__get_cpuid(7, &a, &b, &c, &d)) {
		if ((b & CPUID_SMAP)) {
			cr4 = read_cr("4");
			cr4 |= (1 << 21); // Enable SMAP
			write_cr("4", cr4);
			asm("clac");
		}
	}

	if (__get_cpuid(7, &a, &b, &c, &d)) {
		if ((c & CPUID_UMIP)) {
			cr4 = read_cr("4");
			cr4 |= (1 << 11); // Enable UMIP
			write_cr("4", cr4);
		}
	}

	vmm_switch_pagemap(kernel_pagemap);
	lapic_init(smp_info->lapic_id);
	struct prcb *ap = kmalloc(sizeof(struct prcb));
	if(cpu_count > 21) {
		ltoa(smp_info->lapic_id, ap->name, 16);
	}
	strcpy(ap->name, prcb_names[smp_info->lapic_id]);
	ap->cpu_number = smp_info->lapic_id;
	vector_add(&prcbs, ap);
	smp_set_gs((uint64_t)prcbs[vector_size(prcbs) - 1]);
	kprintf("CPU%d: %s online!\n", prcb_return_current_cpu()->cpu_number, prcb_return_current_cpu()->name);
	if(prcb_return_current_cpu()->cpu_number != bsp_lapic_core) {
		halt_current_cpu();
	}
}


void smp_init(struct stivale2_struct_tag_smp *smp_info) {
	prcbs = vector_create();
	bsp_lapic_core = smp_info->bsp_lapic_id;
	kprintf("SMP: Bringing up the AP cores\n");
	for (size_t i = 0; i < smp_info->cpu_count; i++) {
		if(smp_info->smp_info[i].lapic_id == bsp_lapic_core) {
			kprintf("SMP: BSP Core %u\n", bsp_lapic_core);
			smp_init_core((void *)&smp_info->smp_info[i]);
			continue;
		}
		smp_info->smp_info[i].target_stack = (uint64_t)pmm_allocz(2097152 / PAGE_SIZE);
		smp_info->smp_info[i].target_stack += MEM_PHYS_OFFSET + 2097152;
		smp_info->smp_info[i].goto_address = (uint64_t)smp_init_core;
		timer_sleep(100);
	}
	is_smp = true;
}

struct prcb *prcb_return_current_cpu(void) {
	return (struct prcb*)smp_read_gs();
}

uint64_t prcb_return_installed_cpus(void) {
	return cpu_count;
}
