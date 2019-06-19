#include <stdio.h>

char *my_strncpy(char *dest, const char *src, size_t n) {

    for (dest[0] = src[0]; src[n] != src[0]; n--) dest[n] = src[n];     //Copy each char to destination
    return dest;                                                        //Return destination

}

int main(void) {

    char str[13];
    my_strncpy(str, "Hello World !", 13);
    printf("%s\n", str);
    return 0;

}
