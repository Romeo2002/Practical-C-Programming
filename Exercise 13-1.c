/*Exercise 13-1: Write a program that uses pointers to set each element of an array to zero.

Steve Oualline. Practical C Programming (Nutshell Handbooks) (Kindle Locations 4449-4450). O'Reilly Media. Kindle Edition. */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char line[50];
	char input[50];
	char* input_ptr;
	char * current_ptr;
	printf("Please enter the string to wipe out: ");
	fgets(line, sizeof(line), stdin);
	//sscanf(line, "%s", input);
	input_ptr = line;
	printf("You have enter the string: %s", input_ptr);
	current_ptr = input_ptr;
	while (*current_ptr != '\0') {
		*current_ptr = '0';
		 current_ptr++;
	}
	printf("Wiped out: %s", input_ptr);
	return 0;
}