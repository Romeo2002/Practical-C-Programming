/*Exercise 14-4: Write a program that reads an ASCII file containing a list of numbers and writes a binary file containing the same list. Write a program that goes the other way so that you can check your work.

Steve Oualline. Practical C Programming (Nutshell Handbooks) (Kindle Locations 4933-4935). O'Reilly Media. Kindle Edition. */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	FILE* in_file;
	FILE* out_file;
	const char in_filename[] = "mynewfile.txt";
	const char out_filename[] = "output";
	int buffer_char;
	in_file = fopen(in_filename, "r");
	if (in_file == NULL)
	{
		printf("Error: Could not open %s file!", in_filename);
		exit(8);
	}
	out_file = fopen(out_filename, "wb");
	if (out_file == NULL)
	{
		printf("Error: Could not open %s file!", out_filename);
		exit(8);
	}
	while (1) {
		buffer_char = fgetc(in_file);
		if (buffer_char == EOF) {
			break;
		}
		fputc((buffer_char - '0'), out_file);
	}
	fclose(in_file);
	fclose(out_file);
	return 0;
}