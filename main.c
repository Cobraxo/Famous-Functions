#include "my_lib.h"

int main(void) {

    // Try my_putc
    (void)my_putc('-', stdout);

    // Try my_puts
    (void)my_puts("How are you doing ?");

    // Try my_strncpy
    char str[13];
    my_strncpy(str, "Hello World !", 13);
    printf("%s\n", str);

    // Try my_strchr
    char *ptr = NULL, string[] = "Test sentence"; 
    ptr = my_strchr(string, 's');   //We search 's' in "Test sentence"
    printf("%c\n", *ptr);

    return 0;


}
