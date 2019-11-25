/*Exercise 8-4: Write a program to print out the multiplication table.

Steve Oualline. Practical C Programming (Nutshell Handbooks) (Kindle Locations 2636-2637). O'Reilly Media. Kindle Edition. */
#include <stdio.h>

int i, number;
char line[50];

int main() {
	printf("Please enter the number to display Multiplication Table: ");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%d", &number);
	printf("Multiplication Table: %d", number);
	for (i = 0; i <= 10; i++) {
		printf("%d x %d = %d\n", number, i, (number * i));
	}
	return 0;
}