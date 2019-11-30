/*Exercise 14-2: Write a program to copy a file, expanding all tabs to multiple spaces.

Steve Oualline. Practical C Programming (Nutshell Handbooks) (Kindle Location 4931). O'Reilly Media. Kindle Edition. */
#define _CRT_SECURE_NO_WARNINGS
#define NUMBER_OF_SPACE 2
#include <stdio.h>


int main() {
	FILE* in_file;
	FILE* out_file;
	int in_char, out_char;
	const char filename[] = "mynewfile.txt";
	const char newfile[] = "copied.txt";
	int count;
	in_file = fopen(filename, "r");
	if (in_file == NULL) {
		printf("Error: Could not open %s file!", filename);
		exit(8);
	}
	out_file = fopen(newfile, "w");
	if (out_file == NULL) {
		printf("Error: Could not create %s file!", newfile);
		exit(8);
	}
	while (1) {
		in_char = fgetc(in_file);
		if (in_char == EOF) {
			break;
		}
		if (in_char == '\t') {
			for (count = 1; count <= NUMBER_OF_SPACE; count++) {
				fputc(' ', out_file);
			}
		}
		if (in_char != '\t')
		{
			fputc(in_char, out_file);
		}
	}
	fclose(in_file);
	fclose(out_file);
	return 0;
}