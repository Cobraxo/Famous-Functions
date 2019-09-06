#ifndef MY_LIB
#define MY_LIB

#include <stdio.h>
#include <string.h>

#define TRUE 1

// In sys_write.asm file
extern size_t my_write(int fd, const void *buf, size_t count);

// Put char on stream
int my_putc(int c, FILE *stream);

// Put string on stdout
int my_puts(const char *s);

// Copy string to another
char *my_strncpy(char *dest, const char *src, size_t n);

// Find char in string
char *my_strchr(const char *s, int c);

#endif
