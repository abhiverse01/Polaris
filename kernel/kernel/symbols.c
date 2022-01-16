#include "symbols.h"

sym_table_t symbol_table[] = {
	{0xffffffff80000000, "acpi_checksum"},
	{0xffffffff8000001b, "init_ec"},
	{0xffffffff800007c3, "ioapic_read"},
	{0xffffffff800007dc, "ioapic_write"},
	{0xffffffff800007f5, "get_gsi_count"},
	{0xffffffff8000080b, "get_ioapic_by_gsi"},
	{0xffffffff80000871, "lapic_read"},
	{0xffffffff800008b4, "lapic_write"},
	{0xffffffff800008f9, "lapic_set_nmi"},
	{0xffffffff80000df4, "wrxcr"},
	{0xffffffff80000e04, "xsave"},
	{0xffffffff80000e0f, "xrstor"},
	{0xffffffff80000e1a, "fxsave"},
	{0xffffffff80000e1e, "fxrstor"},
	{0xffffffff80000f36, "cpu_init"},
	{0xffffffff80002a38, "pic_disable"},
	{0xffffffff80002c42, "octal_to_int"},
	{0xffffffff80002dc1, "devtmpfs_mount"},
	{0xffffffff80002dc9, "devtmpfs_populate"},
	{0xffffffff80002dcf, "devtmpfs_mkdir"},
	{0xffffffff80002e34, "devtmpfs_open"},
	{0xffffffff8000300e, "devtmpfs_close"},
	{0xffffffff80002faa, "devtmpfs_read"},
	{0xffffffff80002f04, "devtmpfs_write"},
	{0xffffffff80003076, "tmpfs_populate"},
	{0xffffffff8000307c, "tmpfs_mkdir"},
	{0xffffffff800030ee, "tmpfs_open"},
	{0xffffffff8000330e, "tmpfs_close"},
	{0xffffffff800032aa, "tmpfs_read"},
	{0xffffffff80003204, "tmpfs_write"},
	{0xffffffff800031bf, "tmpfs_mount"},
	{0xffffffff80003340, "fstype2fs"},
	{0xffffffff8000376e, "path2node"},
	{0xffffffff800041c1, "lookup"},
	{0xffffffff8000432c, "_out_buffer"},
	{0xffffffff80004336, "_out_null"},
	{0xffffffff80004337, "_out_fct"},
	{0xffffffff80004350, "_atoi"},
	{0xffffffff80004378, "_out_rev"},
	{0xffffffff80004431, "_ntoa_format"},
	{0xffffffff800045be, "_ntoa_long"},
	{0xffffffff80004694, "_ntoa_long_long"},
	{0xffffffff8000476a, "_etoa"},
	{0xffffffff80004aeb, "_ftoa"},
	{0xffffffff80004ede, "_vsnprintf"},
	{0xffffffff8000595e, "_out_char"},
	{0xffffffff80005c57, "twist"},
	{0xffffffff80005e55, "stub_close"},
	{0xffffffff80005e5b, "stub_read"},
	{0xffffffff80005e63, "stub_write"},
	{0xffffffff80005e6b, "stub_ioctl"},
	{0xffffffff80006400, "inner_alloc"},
	{0xffffffff80006625, "get_next_level"},
	{0xffffffff80006b9b, "alloc_new_process"},
	{0xffffffff80007a76, "is_transmit_empty"},
	{0xffffffff80007b86, "bcdtobin"},
	{0xffffffff80007b95, "is_updating"},
	{0xffffffff80007bb7, "read"},
	{0xffffffff80007be8, "rtc_get_time"},
	{0xffffffff80007c31, "rtc_get_date_time"},
	{0xffffffff8000863b, "make_pci_address"},
	{0xffffffff80008658, "mcfg_pci_write"},
	{0xffffffff80008768, "mcfg_pci_read"},
	{0xffffffff8000889b, "legacy_pci_write"},
	{0xffffffff80008949, "legacy_pci_read"},
	{0xffffffff80009813, "lai_read_buffer"},
	{0xffffffff800098a6, "lai_write_buffer"},
	{0xffffffff8000a39a, "lai_parse_u32"},
	{0xffffffff8000a3e0, "lai_exec_pop_blkstack_back"},
	{0xffffffff8000a403, "lai_exec_pop_stack_back"},
	{0xffffffff8000a426, "lai_exec_push_ctxstack"},
	{0xffffffff8000a47b, "lai_exec_push_blkstack"},
	{0xffffffff8000a4d2, "lai_exec_push_stack"},
	{0xffffffff8000a504, "lai_exec_push_opstack"},
	{0xffffffff8000a563, "lai_parse_varint"},
	{0xffffffff8000a683, "lai_exec_commit_pc"},
	{0xffffffff8000a6ae, "lai_exec_reserve_ctxstack"},
	{0xffffffff8000a749, "lai_exec_reserve_blkstack"},
	{0xffffffff8000a7ea, "lai_exec_reserve_stack"},
	{0xffffffff8000a896, "lai_parse_name"},
	{0xffffffff8000a8ba, "lai_exec_reduce_node"},
	{0xffffffff8000b007, "lai_exec_reduce_op"},
	{0xffffffff8000e910, "lai_cleanup_free_string"},
	{0xffffffff8000e93b, "lai_exec_parse"},
	{0xffffffff80014aed, "lai_exec_process"},
	{0xffffffff80016a5e, "lai_exec_run"},
	{0xffffffff80017b5f, "lai_hash_string"},
	{0xffffffff80017b82, "lai_load_table"},
	{0xffffffff80017c09, "lai_hashtable_grow"},
	{0xffffffff8001954b, "lai_object_type_of_objref"},
	{0xffffffff80019590, "lai_object_type_of_node"},
	{0xffffffff80019646, "lai_clone_string"},
	{0xffffffff800197c8, "lai_clone_buffer"},
	{0xffffffff8001ac52, "lai_clone_package"},
	{0xffffffff8001b0a8, "lai_buffer_put_at"},
	{0xffffffff8001b116, "lai_buffer_get_at"},
	{0xffffffff8001b18d, "lai_calculate_access_width"},
	{0xffffffff8001b235, "lai_find_parent_root_of"},
	{0xffffffff8001b31c, "lai_get_pci_params"},
	{0xffffffff8001b590, "lai_perform_read"},
	{0xffffffff8001b9a7, "lai_perform_write"},
	{0xffffffff8001c5da, "laihost_free_package"},
	{0xffffffff8001c7b2, "is_digit"},
	{0xffffffff8001c7c0, "num_fmt"},
	{0xffffffff8001cd28, "poll_ibf"},
	{0xffffffff8001cd46, "poll_obf"},
	{0xffffffff8001cd64, "disable_burst"},
	{0xffffffff8001cd94, "enable_burst"},
	{0xffffffff8001d220, "readq"},
	{0xffffffff8001d30c, "readd"},
	{0xffffffff8001d38f, "readw"},
	{0xffffffff8001d3e7, "readb"},
	{0xffffffff8001d4c0, "writeq"},
	{0xffffffff8001d5a8, "writed"},
	{0xffffffff8001d62b, "writew"},
	{0xffffffff8001d680, "writeb"},
	{0xffffffff8001d8d9, "lai_bios_calc_checksum"},
	{0xffffffff8001ec86, "lai_get_header_info"},
	{0xffffffff8001fa91, "liballoc_memset"},
	{0xffffffff8001faab, "liballoc_memcpy"},
	{0xffffffff8001fae6, "allocate_new_page"},
	{0xffffffff80017e28, "lai_uninstall_nsnode"},
	{0xffffffff80007504, "running_thrd"},
	{0xffffffff8001768b, "lai_eval_vargs"},
	{0xffffffff8001c2b8, "lai_write_indexfield"},
	{0xffffffff80005fbd, "strcpy"},
	{0xffffffff8001d41b, "lai_write_ec"},
	{0xffffffff80007b31, "write_serial"},
	{0xffffffff800093e4, "_putchar"},
	{0xffffffff80020101, "krealloc"},
	{0xffffffff80000d0a, "apic_init"},
	{0xffffffff800011f2, "smp_init"},
	{0xffffffff80000532, "laihost_sleep"},
	{0xffffffff80009630, "bswap16"},
	{0xffffffff80000375, "laihost_unmap"},
	{0xffffffff80009711, "lai_eisaid"},
	{0xffffffff8000424a, "alloc"},
	{0xffffffff8000341f, "vfs_get_absolute_path"},
	{0xffffffff800078f7, "thread_exit"},
	{0xffffffff800193ed, "lai_ns_child_iterate"},
	{0xffffffff8000a310, "lai_exec_get_integer"},
	{0xffffffff80009605, "lai_is_name"},
	{0xffffffff8000a2e8, "lai_exec_get_objectref"},
	{0xffffffff80000c7f, "apic_timer_init"},
	{0xffffffff80009664, "bswap64"},
	{0xffffffff80016aa1, "lai_init_state"},
	{0xffffffff800085f3, "hpet_counter_value"},
	{0xffffffff80002b28, "port_dword_out"},
	{0xffffffff80019868, "lai_create_pkg"},
	{0xffffffff80000544, "laihost_timer"},
	{0xffffffff80005b6d, "vprintf_"},
	{0xffffffff8001796f, "lai_panic"},
	{0xffffffff8001f29b, "lai_resource_irq_is_active_low"},
	{0xffffffff800177dd, "lai_enable_tracing"},
	{0xffffffff80017a3f, "lai_calloc"},
	{0xffffffff80003d6f, "stivale2_get_tag"},
	{0xffffffff8000056b, "init_madt"},
	{0xffffffff800096eb, "char_to_hex"},
	{0xffffffff80009bba, "lai_exec_ref_store"},
	{0xffffffff8000431e, "liballoc_unlock"},
	{0xffffffff8001a6b9, "lai_obj_to_buffer"},
	{0xffffffff800004ee, "laihost_pci_readw"},
	{0xffffffff800004cc, "laihost_pci_readb"},
	{0xffffffff8001c4db, "lai_var_finalize"},
	{0xffffffff80009965, "lai_exec_string_length"},
	{0xffffffff80002a29, "isr_register_handler"},
	{0xffffffff80018aed, "lai_do_resolve_new_node"},
	{0xffffffff80004226, "symbols_return_function_name"},
	{0xffffffff80017dce, "lai_current_instance"},
	{0xffffffff8001f587, "lai_disable_acpi"},
	{0xffffffff8001aa6b, "lai_obj_to_integer"},
	{0xffffffff80006aeb, "vmm_page_fault_handler"},
	{0xffffffff80006394, "vec_swapsplice_"},
	{0xffffffff80006795, "vmm_init"},
	{0xffffffff800198ff, "lai_obj_resize_string"},
	{0xffffffff80009b73, "lai_store_ns"},
	{0xffffffff80000376, "laihost_scan"},
	{0xffffffff800178b5, "lai_warn"},
	{0xffffffff80017dd6, "lai_create_nsnode"},
	{0xffffffff800099a8, "lai_exec_pkg_var_store"},
	{0xffffffff8001eee4, "lai_resource_iterate"},
	{0xffffffff8001c4ac, "lai_do_rev_method"},
	{0xffffffff800177fb, "lai_debug"},
	{0xffffffff80019ede, "lai_obj_to_string"},
	{0xffffffff8001ff6c, "kfree"},
	{0xffffffff80001347, "set_idt"},
	{0xffffffff8000852a, "gdt_load_tss"},
	{0xffffffff80000146, "acpi_init"},
	{0xffffffff80007b0a, "write_serial_char"},
	{0xffffffff80002b24, "port_dword_in"},
	{0xffffffff8000665b, "vmm_switch_pagemap"},
	{0xffffffff800195b3, "lai_create_string"},
	{0xffffffff80008602, "hpet_usleep"},
	{0xffffffff800070a4, "process_sleep"},
	{0xffffffff8001c69b, "lai_var_move"},
	{0xffffffff80005a44, "sprintf_"},
	{0xffffffff800035bd, "vfs_new_node"},
	{0xffffffff80000a1e, "lapic_init"},
	{0xffffffff80007115, "process_wait"},
	{0xffffffff8001ece4, "lai_read_resource"},
	{0xffffffff80006583, "pmm_alloc"},
	{0xffffffff8000628c, "vec_compact_"},
	{0xffffffff800196d6, "lai_create_c_string"},
	{0xffffffff80019739, "lai_create_buffer"},
	{0xffffffff8001eb66, "lai_acpi_reset"},
	{0xffffffff800084c9, "gdt_init"},
	{0xffffffff800191a2, "lai_resolve_search"},
	{0xffffffff8000368b, "vfs_mkdir"},
	{0xffffffff80018162, "lai_ns_get_child"},
	{0xffffffff80018523, "lai_stringify_node_path"},
	{0xffffffff80009250, "putchar_at"},
	{0xffffffff8001f663, "lai_evaluate_sta"},
	{0xffffffff80007737, "thread_init"},
	{0xffffffff80016ce3, "lai_populate"},
	{0xffffffff8001f755, "lai_init_children"},
	{0xffffffff800063c5, "vec_swap_"},
	{0xffffffff80016b1b, "lai_finalize_state"},
	{0xffffffff80000bc9, "ioapic_redirect_irq"},
	{0xffffffff8001c23c, "lai_read_indexfield"},
	{0xffffffff8001c3aa, "lai_do_osi_method"},
	{0xffffffff80000452, "laihost_pci_writeb"},
	{0xffffffff80000c20, "apic_send_ipi"},
	{0xffffffff80000346, "laihost_malloc"},
	{0xffffffff80017041, "lai_eval_args"},
	{0xffffffff8001d748, "lai_read_pm_timer_value"},
	{0xffffffff80006662, "vmm_new_pagemap"},
	{0xffffffff80005b94, "vsnprintf_"},
	{0xffffffff80007a8c, "serial_install"},
	{0xffffffff800042f4, "liballoc_lock"},
	{0xffffffff80007d2b, "get_unix_timestamp"},
	{0xffffffff80019a2c, "lai_obj_resize_pkg"},
	{0xffffffff80006361, "vec_splice_"},
	{0xffffffff8001941f, "lai_ns_override_notify"},
	{0xffffffff800078e7, "thread_unblock"},
	{0xffffffff80019bb7, "lai_obj_get_integer"},
	{0xffffffff80018404, "lai_stringify_amlname"},
	{0xffffffff80003d87, "kernel_main"},
	{0xffffffff80007f5c, "load_elf"},
	{0xffffffff80009a9a, "lai_operand_load"},
	{0xffffffff80006603, "pmm_free"},
	{0xffffffff8001c0a6, "lai_read_field"},
	{0xffffffff80005bb2, "fctprintf"},
	{0xffffffff80007dda, "dump_section_table"},
	{0xffffffff8001cde5, "lai_early_init_ec"},
	{0xffffffff80006f4b, "process_exit"},
	{0xffffffff80009c27, "lai_exec_mutate_ns"},
	{0xffffffff8001ad23, "lai_objecttype_ns"},
	{0xffffffff80007a0e, "thread_sleep"},
	{0xffffffff800061af, "vec_expand_"},
	{0xffffffff8000963f, "bswap32"},
	{0xffffffff800078c1, "thread_block"},
	{0xffffffff80017748, "lai_eval_largs"},
	{0xffffffff80000510, "laihost_pci_readd"},
	{0xffffffff8000047c, "laihost_pci_writew"},
	{0xffffffff800094b6, "kprint"},
	{0xffffffff80006c70, "process_create"},
	{0xffffffff80019044, "lai_resolve_path"},
	{0xffffffff80003fba, "_start"},
	{0xffffffff8001d9d7, "lai_bios_detect_rsdp"},
	{0xffffffff800089e7, "pci_init"},
	{0xffffffff80005dbf, "rand"},
	{0xffffffff80006f35, "process_unblock"},
	{0xffffffff80018954, "lai_do_resolve"},
	{0xffffffff80019222, "lai_check_device_pnp_id"},
	{0xffffffff8001f20b, "lai_resource_irq_is_level_triggered"},
	{0xffffffff80017aad, "lai_strcmp"},
	{0xffffffff8001d785, "lai_start_pm_timer"},
	{0xffffffff80005f30, "strncmp"},
	{0xffffffff800042bf, "liballoc_alloc"},
	{0xffffffff80003a9f, "vfs_mount"},
	{0xffffffff80001366, "isr_install"},
	{0xffffffff80001307, "return_installed_cpus"},
	{0xffffffff8000602b, "strncpy"},
	{0xffffffff800182bf, "lai_amlname_parse"},
	{0xffffffff8001ad89, "lai_obj_exec_match_op"},
	{0xffffffff8001a02a, "lai_mutate_string"},
	{0xffffffff800039bd, "vfs_open"},
	{0xffffffff800040db, "panic"},
	{0xffffffff8001c87d, "lai_vsnprintf"},
	{0xffffffff8000944d, "kprintbgc"},
	{0xffffffff8001861c, "lai_install_nsnode"},
	{0xffffffff80009115, "knewline"},
	{0xffffffff800065c6, "pmm_allocz"},
	{0xffffffff8001815d, "lai_ns_get_parent"},
	{0xffffffff8000723c, "process_kill"},
	{0xffffffff80002b55, "syscall_init"},
	{0xffffffff80000e3f, "wsmp_cpu_init"},
	{0xffffffff80017ae0, "lai_snprintf"},
	{0xffffffff800183b3, "lai_amlname_done"},
	{0xffffffff800003f7, "laihost_outb"},
	{0xffffffff800090eb, "draw_px"},
	{0xffffffff8001d8f4, "lai_bios_detect_rsdp_within"},
	{0xffffffff80006d38, "process_init"},
	{0xffffffff8001c1b1, "lai_write_field"},
	{0xffffffff800093b3, "putchar_color"},
	{0xffffffff80005d6c, "srand"},
	{0xffffffff800193aa, "lai_ns_iterate"},
	{0xffffffff8000041a, "laihost_outd"},
	{0xffffffff800033a4, "vfs_install_fs"},
	{0xffffffff8001952b, "lai_ns_get_opregion_address_space"},
	{0xffffffff8001f434, "lai_get_sci_event"},
	{0xffffffff80002b0e, "port_byte_in"},
	{0xffffffff8001acc2, "lai_objecttype_obj"},
	{0xffffffff8000032c, "laihost_panic"},
	{0xffffffff80002b1d, "port_word_out"},
	{0xffffffff80019504, "lai_set_acpi_revision"},
	{0xffffffff800075a9, "alloc_new_thread"},
	{0xffffffff8001a613, "lai_obj_clone"},
	{0xffffffff800029a3, "isr_handler"},
	{0xffffffff8000940f, "kprint_color"},
	{0xffffffff8001a900, "lai_obj_to_hex_string"},
	{0xffffffff80006268, "vec_reserve_po2_"},
	{0xffffffff8001f329, "lai_resource_next_irq"},
	{0xffffffff80005f0f, "strcmp"},
	{0xffffffff80008b18, "pci_write"},
	{0xffffffff8001d6c1, "lai_query_ec"},
	{0xffffffff80006e11, "process_fork"},
	{0xffffffff80003985, "vfs_new_node_deep"},
	{0xffffffff80006f09, "process_block"},
	{0xffffffff80017e0c, "lai_create_nsnode_or_die"},
	{0xffffffff800183c2, "lai_amlname_iterate"},
	{0xffffffff80019cb9, "lai_mutate_buffer"},
	{0xffffffff80017a72, "lai_strlen"},
	{0xffffffff80002bda, "dev_new_id"},
	{0xffffffff80018c4e, "lai_resolve_new_node"},
	{0xffffffff80002a5c, "pic_init"},
	{0xffffffff80008567, "hpet_init"},
	{0xffffffff8001dab5, "lai_pci_parse_prt"},
	{0xffffffff8001d869, "lai_busy_wait_pm_timer"},
	{0xffffffff80000c6a, "apic_eoi"},
	{0xffffffff80000563, "acpi_get_lapic"},
	{0xffffffff80005ebd, "resource_create"},
	{0xffffffff8000646b, "pmm_init"},
	{0xffffffff80005ade, "snprintf_"},
	{0xffffffff80005d07, "get_rdseed"},
	{0xffffffff80002b12, "port_byte_out"},
	{0xffffffff80000b19, "ioapic_redirect_gsi"},
	{0xffffffff8001e13e, "lai_pci_find_bus"},
	{0xffffffff80019c22, "lai_obj_get_handle"},
	{0xffffffff8001d189, "lai_read_ec"},
	{0xffffffff8000096b, "timer_interrupt"},
	{0xffffffff800042d7, "liballoc_free"},
	{0xffffffff8001e028, "lai_pci_find_device"},
	{0xffffffff80000e30, "wrmsr"},
	{0xffffffff800094cb, "draw_rect"},
	{0xffffffff8000035c, "laihost_free"},
	{0xffffffff800099c5, "lai_exec_access"},
	{0xffffffff80018c93, "lai_create_root"},
	{0xffffffff8000a078, "lai_operand_emplace"},
	{0xffffffff8001948d, "lai_ns_get_node_type"},
	{0xffffffff80008b42, "ssfn_utf8"},
	{0xffffffff800177c7, "lai_eval"},
	{0xffffffff8000998e, "lai_exec_pkg_var_load"},
	{0xffffffff8001e6cb, "lai_enter_sleep"},
	{0xffffffff8001e654, "lai_pci_route"},
	{0xffffffff80005973, "printf_"},
	{0xffffffff80008bf2, "ssfn_putc"},
	{0xffffffff80003c09, "vfs_dump_nodes"},
	{0xffffffff8001bf07, "lai_write_field_internal"},
	{0xffffffff80009a2d, "lai_exec_ref_load"},
	{0xffffffff8001a232, "lai_obj_to_type_string"},
	{0xffffffff8001a49e, "lai_mutate_integer"},
	{0xffffffff80000444, "laihost_ind"},
	{0xffffffff80002b18, "port_word_in"},
	{0xffffffff8000905f, "vid_reset"},
	{0xffffffff8001f846, "lai_enable_acpi"},
	{0xffffffff800004a6, "laihost_pci_writed"},
	{0xffffffff80019b15, "lai_obj_get_type"},
	{0xffffffff8000130f, "set_idt_gate"},
	{0xffffffff80006214, "vec_reserve_"},
	{0xffffffff8001fb5b, "kmalloc"},
	{0xffffffff80008af7, "pci_read"},
	{0xffffffff8001c372, "lai_write_opregion"},
	{0xffffffff800074d3, "running_proc"},
	{0xffffffff80019992, "lai_obj_resize_buffer"},
	{0xffffffff80000351, "laihost_realloc"},
	{0xffffffff80002b2e, "syscall_handler"},
	{0xffffffff80003cbe, "vfs_stat"},
	{0xffffffff80019447, "lai_ns_override_opregion"},
	{0xffffffff8001e426, "lai_pci_route_pin"},
	{0xffffffff8001bdf7, "lai_read_field_internal"},
	{0xffffffff800072cb, "sched_init"},
	{0xffffffff8001d83d, "lai_stop_pm_timer"},
	{0xffffffff8000668e, "vmm_map_page"},
	{0xffffffff80018eab, "lai_create_namespace"},
	{0xffffffff80005f6d, "strlen"},
	{0xffffffff8000958e, "lai_api_error_to_string"},
	{0xffffffff80002c64, "initramfs_init"},
	{0xffffffff800002e5, "laihost_log"},
	{0xffffffff80009e08, "lai_operand_mutate"},
	{0xffffffff80000428, "laihost_inb"},
	{0xffffffff8001a7a0, "lai_obj_to_decimal_string"},
	{0xffffffff8000618e, "strchr"},
	{0xffffffff800062f7, "vec_insert_"},
	{0xffffffff800077f1, "thread_create"},
	{0xffffffff8000094f, "sci_interrupt"},
	{0xffffffff80019be9, "lai_obj_get_pkg"},
	{0xffffffff8001f4e2, "lai_set_sci_event"},
	{0xffffffff80003040, "devtmpfs_add_device"},
	{0xffffffff80009074, "video_init"},
	{0xffffffff8001c465, "lai_do_os_method"},
	{0xffffffff8001f121, "lai_resource_get_type"},
	{0xffffffff800200d1, "kcalloc"},
	{0xffffffff8000952d, "clear_screen"},
	{0xffffffff80017a90, "lai_strcpy"},
	{0xffffffff80007535, "yield_to_scheduler"},
	{0xffffffff800060e0, "strchrnul"},
	{0xffffffff80000e22, "rdmsr"},
	{0xffffffff8001814a, "lai_ns_get_root"},
	{0xffffffff80000210, "acpi_find_sdt"},
	{0xffffffff80000436, "laihost_inw"},
	{0xffffffff80000409, "laihost_outw"},
	{0xffffffff8001ce87, "lai_init_ec"},
	{0xffffffff800093cf, "putcharx"},
	{0xffffffff80002c17, "dev_add_new"},
	{0xffffffff80000367, "laihost_map"},
	{0xffffffff8000429c, "free"},
	{0xffffffff8001c632, "lai_swap_object"},
	{0xffffffff8001c337, "lai_read_opregion"},
	{0xffffffff8001c701, "lai_var_assign"},
	{0xffffffff, ""}};

static sym_table_t lookup(uint64_t address) {
	size_t i;
	for (i = 0; symbol_table[i].address != 0xffffffff; i++)
		if ((symbol_table[i].address << 52) == (address << 52))
			return symbol_table[i];
	return symbol_table[i];
}

const char *symbols_return_function_name(uint64_t address) {
	sym_table_t table = lookup(address);
	if (table.address == 0xffffffff)
		return "UNKNOWN";
	return table.function_name;
}
