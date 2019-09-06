/***

Name = put.c
Author = Cobraxo
Date = 08/06/2019

download:
    git clone https://github.com/Cobraxo/Famous-Functions.git
 
compile:
    nasm -f elf64 sys_write.asm -o sys_write.o
    gcc -Wall -Werror -Wextra _lib.h put.c sys_write.o -o put

Enjoy ! :P

***/


// For strlen() function
#include "_lib.h"


// In sys_write.asm file
extern size_t my_write(int fd, const void *buf, size_t count);
int my_putc(int c, FILE *stream);
int my_puts(const char *s);


int main() {
    
    (void)my_putc('-', stdout);
    (void)my_puts("How are you doing ?");

    return 0;

}


int my_puts(const char *s) {

    char newline = '\n';

    if (s == NULL)
        //Return error (End Of File)
        return EOF;

    //total_len = len + newline character, so +1 byte
    size_t len = strlen(s), total_len = len + 1;

    //Range of int, because my_puts return int
    if (total_len >= 32767 || (signed int)total_len <= -32768)
        return EOF;

    (void)my_write(1, s, len);        //Put string on stdout
    (void)my_write(1, &newline, 1);  //Put newline character

    return total_len;              //+1 for the newline character

}


int my_putc(int c, FILE *stream) {

    //output : 0 stdint, 1 stdout, 2 stderr
    char fd;

    if (stream == stdin)
        fd = 0;

    else if (stream == stdout)
        fd = 1;
    
    else if (stream == stderr)
        fd = 2;

    else 
        return -1;
    
    (void)my_write(fd, &c, 1);

    return c;

}
