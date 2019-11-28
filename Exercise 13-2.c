/*Exercise 13-2: Write a function that takes a single string as its argument and returns a pointer to the first 'a' character in the string.

Steve Oualline. Practical C Programming (Nutshell Handbooks) (Kindle Locations 4450-4451). O'Reilly Media. Kindle Edition. */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(int argc, char* argv[]) {
	char* argv_ptr;
	printf("Hello!\n");
	argv_ptr = argv[1];
	while (*argv_ptr != 'a') {
		argv_ptr++;
	}
	printf("the remaining argument is: %s", argv_ptr);
	return 0;
}