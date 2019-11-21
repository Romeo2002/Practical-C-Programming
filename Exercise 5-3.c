/*Write a program that prints the perimeter of a rectangle given its height and width. perimeter = 2 · (width + height)

Steve Oualline. Practical C Programming (Nutshell Handbooks) (Kindle Locations 1800-1802). O'Reilly Media. Kindle Edition. */
#include <stdio.h>


float height, width, perimeter; //
char readline[50];

int main() {
	printf("Please enter the height and  width of your rectangle:\n");
	fgets(readline, sizeof(readline), stdin);
	sscanf(readline, "%f %f", &height, &width);
	printf("Your rectangle have height is %f and width is %f", height, width);

	perimeter = (height + width) / 2;
	printf("The Perimeter of the your rectangle is %f", perimeter);
	return 0;
}