/***

Name = my_put.c
Author = Cobraxo
Date = 08/06/2019

download:
    git clone https://github.com/Cobraxo/Famous-Functions.git
 
compile:
    make

Enjoy ! :P

***/


#include "my_lib.h"


int my_putc(int c, FILE *stream) {

    if (!c && !stream && errno)
        return EOF;

    // output : 0 stdint, 1 stdout, 2 stderr
    char fd;

    if (stream == stdin)
        fd = 0;

    else if (stream == stdout)
        fd = 1;
    
    else if (stream == stderr)
        fd = 2;

    else 
        return EOF;
    
    (void)my_write(fd, &c, 1);

    return c;

}

int my_puts(const char *s) {

    char newline = '\n';

    if (s == NULL)
        // Return error (End Of File)
        return EOF;

    // total_len = len + newline character, so +1 byte
    size_t len = strlen(s), total_len = len + 1;

    // Range of int, because my_puts return int
    if (total_len >= 32767 || (signed int)total_len <= -32768)
        return EOF;

    (void)my_write(1, s, len);        // Put string on stdout
    (void)my_write(1, &newline, 1);  // Put newline character

    return total_len;              // +1 for the newline character

}
