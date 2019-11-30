/*Exercise 14-1: Write a program that reads a file and then counts the number of lines in it.

Steve Oualline. Practical C Programming (Nutshell Handbooks) (Kindle Locations 4929-4930). O'Reilly Media. Kindle Edition. */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	const char input_file[] = "mynewfile.txt";
	int count = 0;
	FILE *in_file;
	int ch;
	in_file = fopen(input_file, "r");
	if (in_file == NULL) {
		printf("Error: Could not open file %s", input_file);
	}
	while (1) {
		ch = fgetc(in_file);
		if (ch == EOF){
			++count;
			break;
		}
		if (ch == '\n') {
			++count;
		}
	}
	fclose(in_file);
	printf("File %s have %d lines.", input_file, count);
	return 0;
}
