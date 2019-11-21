/*Exercise 5-2: Write a program to calculate the volume of a sphere.

Steve Oualline. Practical C Programming (Nutshell Handbooks) (Kindle Locations 1798-1799). O'Reilly Media. Kindle Edition. */

#include <stdio.h>

const float  PI = 3.14;
float R; //
float volume;
char readline[50];

int main() {
	printf("Please enter the distance of radius:\n");
	fgets(readline, sizeof(readline), stdin);
	sscanf(readline, "%f", &R);
	printf("You have enter %f\n", R);

	volume = (4*R*R*R*PI)/3;
	printf("Volume of the sphere is %f",volume);
	return 0;
}