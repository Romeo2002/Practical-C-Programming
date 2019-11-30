/*Exercise 14-3: Write a program that reads a file containing a list of numbers, and then writes two files, one with all numbers divisible by three and another containing all the other numbers.

Steve Oualline. Practical C Programming (Nutshell Handbooks) (Kindle Locations 4932-4933). O'Reilly Media. Kindle Edition. */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	FILE* in_file;
	FILE * divide_3_file;
	FILE* remaining_file;
	int ch;
	const char filename[] = "mynewfile.txt";
	const char divide_3[] = "3file.txt";
	const char remaining[] = "remaining.txt";
	in_file = fopen(filename, "r");
	if (in_file == NULL) {
		printf("Error: Could not open %s file", filename);
		exit(8);
	}
	divide_3_file = fopen(divide_3, "w");
	if (divide_3_file == NULL) {
		printf("Error: Could not open %s file", divide_3);
		exit(8);
	}
	remaining_file = fopen(remaining, "w");
	if (remaining_file == NULL) {
		printf("Error: Could not open %s file", remaining);
		exit(8);
	}
	while (1) {
		ch = fgetc(in_file);
		if (ch == EOF) {
			break;
		}
		if ((ch % 3) == 0) {
			fputc(ch, divide_3_file);
		}
		else 
		{
			fputc(ch, remaining_file);
		}
	}
	fclose(in_file);
	fclose(divide_3_file);
	fclose(remaining_file);
	return 0;
}	