#ifndef KEYBOARD_H
#define KEYBOARD_H

size_t keyboard_gets(char *string, size_t count, bool put_to_fb);
char keyboard_getchar(void);
void keyboard_init(void);

#endif
