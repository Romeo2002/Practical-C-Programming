/*Exercise 4-3: Write a program to compute the area and perimeter of a rectangle with a width of three inches and a height of five inches. What changes must be made to the program so that it works for a rectangle with a width of 6.8 inches and a length of 2.3 inches?

Steve Oualline. Practical C Programming (Nutshell Handbooks) (Kindle Locations 1308-1310). O'Reilly Media. Kindle Edition. */
#include <stdio.h>
float width = 5;
float height = 5;
float area;
int main() {
	area = (width * height) / 2;
	printf("rectangle are is %f", area);
	return 0;
}