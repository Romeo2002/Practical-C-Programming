/*Exercise 14-5: Write a program that copies a file and removes all characters with the high bit set ((( ch & 0x80) != 0)).

Steve Oualline. Practical C Programming (Nutshell Handbooks) (Kindle Locations 4935-4937). O'Reilly Media. Kindle Edition. */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	FILE* in_file;
	FILE* out_file;
	int ch, count;
	const char filename[] = "mynewfile.txt";
	const char newfilename[] = "outputfile.txt";
	in_file = fopen(filename, "wb");
	if (in_file == NULL) {
		printf("Error: Could not open %s file!", filename);
		exit(8);
	}
	for (count = 0; count <= 4096; count++) {
		fputc(count, in_file);
	}
	out_file = fopen(newfilename, "w");
	if (out_file == NULL) {
		printf("Error: Could not open %s file!", newfilename);
		exit(8);
	}
	while (1) {
		ch = fgetc(in_file);
		if (ch == EOF) {
			break;
		}
		if ((ch & 0x80) == 0) {
			fputc(ch, out_file);
		}
	}
	fclose(in_file);
	fclose(out_file);
	return 0;
}