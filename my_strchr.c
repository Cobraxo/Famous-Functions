/***

Name = my_strchr.c
Author = Cobraxo
Date = ??/??/2019

download:
    git clone https://github.com/Cobraxo/Famous-Functions.git
 
compile:
    make

Find the char ! :P

***/


#include "my_lib.h"


char *my_strchr(const char *s, int c) {
        while(TRUE) {
                s++;                            // We increment the s, to see the letter
                if (*s == c)    {               // If str2 (letter) is in str1
                        return (char *)s;       // Return the address of the letter found
                }
        }

        return NULL;                            // If str2 is not in str1 return NULL
}
