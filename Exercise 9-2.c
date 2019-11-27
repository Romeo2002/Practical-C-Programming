/*Exercise 9-2: Write a function begins( string1, string2) that returns true if string1 begins string2. Write a program to test the function.

Steve Oualline. Practical C Programming (Nutshell Handbooks) (Kindle Locations 2912-2914). O'Reilly Media. Kindle Edition. */
#include <stdio.h>
#include <string.h>

int begins(char string1[50], char string2[50]) {
	int count;
	int result = 1;
	printf("This is the first string %s", string1);
	printf("This is the second string %s\n", string2);
	for (count = 0; count < (strlen(string1) - 1); count++)
	{
		if (string1[count] != string2[count])
		{
			result = 0;
		}
	}
	return result;
}
int main() {
	char string1[50];
	char string2[50];
	printf("Please enter the first string: ");
	fgets(string1, sizeof(string1), stdin);
	printf("Please enter the second string: ");
	fgets(string2, sizeof(string2), stdin);
	if ((begins(string1, string2)) == 1) {
		printf("yeah it's true!\n");
	}
	else {
		printf("No!\n");
	}
}