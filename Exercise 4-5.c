/*Exercise 4-5: Write a program that deliberately makes the following mistakes: Prints a floating-point number using the %d conversion. 
Prints an integer using the %f conversion. 
Prints a character using the %d conversion.

Steve Oualline. Practical C Programming (Nutshell Handbooks) (Kindle Locations 1312-1315). O'Reilly Media. Kindle Edition. */
#include <stdio.h>
float float_number = 1.2;
int  int_number = 2;
char character = 'K';
int main() {
	printf("Prints a floating-point number using the \%d conversion\n");
	printf("%d\n", float_number);
	printf("Prints an integer using the \%f conversion\n");
	printf("%f\n", int_number);
	printf("Prints a character using the \%d conversion.\n");
	printf("%d\n", character);
	return 0;
	}