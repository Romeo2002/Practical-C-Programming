/*Exercise 5-1: Write a program that converts Centigrade to Fahrenheit.

Steve Oualline. Practical C Programming (Nutshell Handbooks) (Kindle Location 1796). O'Reilly Media. Kindle Edition. */
#include <stdio.h>

float  Centigrade;
float Fahrenheit;
char readline[50];

int main() {
	printf("Please enter the Centigrade Degree:\n");
	fgets(readline, sizeof(readline), stdin);
	sscanf(readline, "%f", &Centigrade);
	printf("You have enter %f\n", Centigrade);

	Fahrenheit = (9 * Centigrade) / 5 + 32;
	printf("%f Centigrade Degree is equal to %f Fahrenheit Degree", Centigrade, Fahrenheit);
	return 0;
}