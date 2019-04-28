/***
Function that looks for a character in a string:
If it found it
	returns a pointer to the character, ,
otherwise it returns NULL
***/

#include <stdio.h>
#define TRUE 1

extern int my_strlen();			//Prototype for extern function

char *my_strchr(const char *s, int c) {
	while(TRUE) {
		s++;					//We increment the s, to see the letter
		if (*s == c)	{		//If str2 (letter) is in str1
			return (char *)s;	//Return the address of the letter found
		}
	}

	return NULL;				//If str2 is not in str1 return NULL
}


int main(void) {
		char *ptr = NULL, string[] = "Test sentence"; 
        ptr = my_strchr(string, 's');	//We search 's' in "Test sentence"
        printf("%c\n", *ptr);
        return 0;
}
