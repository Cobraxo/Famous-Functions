#include "my_lib.h"

int main(void) {

    // Try my_putc
    (void)puts("\rTrying my_putc:");
        (void)my_putc('+', stdout);
    (void)putc('\n', stdout);

    // Try my_puts
    (void)puts("\rTrying my_puts:");
        (void)my_puts("\tHow are you doing ?");

    // Try my_strncpy
    (void)puts("\rTrying my_strncpy");
        char str[13];
        my_strncpy(str, "Hello World !", 13);
        printf("\t%s\n", str);

    // Try my_strchr
    (void)puts("\rTrying my_strchr");
        char *ptr = NULL, string[] = "Test sentence"; 
        ptr = my_strchr(string, 's');   //We search 's' in "Test sentence"
        printf("\t%c\n", *ptr);

    return 0;

}
