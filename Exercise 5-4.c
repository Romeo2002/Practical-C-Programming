/*Write a program that converts kilometers per hour to miles per hour. miles = (kilometer · 0.6213712

Steve Oualline. Practical C Programming (Nutshell Handbooks) (Kindle Locations 1803-1804). O'Reilly Media. Kindle Edition. */
#include <stdio.h>

float mile, kilometer;
char line[50];

int main() {
	printf(" Please enter the speed (km/h):\n");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%f", &kilometer);
	printf("You have enter %f kilometer/h. Please wait for converting to miles/h! Converting.....\n", kilometer);
	mile = kilometer * 0.6213712;
	printf("%f km/h is equal to %f miles/h", kilometer, mile);
	return 0;
}