/***

Name = my_strncpy.c
Author = Cobraxo
Date = ??/??/2019

download:
    git clone https://github.com/Cobraxo/Famous-Functions.git
 
compile:
    make

Try it ! :P

***/


#include "my_lib.h"


char *my_strncpy(char *dest, const char *src, size_t n) {

    for (dest[0] = src[0]; src[n] != src[0]; n--) dest[n] = src[n];     // Copy each char to destination
    return dest;                                                        // Return destination

}
