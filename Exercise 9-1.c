/*Exercise 9-1: Write a procedure that counts the number of words in a string. (Your documentation should describe exactly how you define a word.) Write a program to test your new procedure.
string must be in one line and all the words are separated by space character;
Steve Oualline. Practical C Programming (Nutshell Handbooks) (Kindle Locations 2910-2912). O'Reilly Media. Kindle Edition. */
#include <stdio.h>
char line[50];
int count, number;
char input_string[50];

int word_count(char input_string[50]) {
	int i = 0;
	int number = 1;
	while (input_string[i] != '\0') {
		if (input_string[i] == ' ') {
			number++;
		}
		i++;
	}
	return number;
}

int main() {
	printf("Please enter string to count: ");
	fgets(input_string, sizeof(input_string), stdin);
	while (input_string[0] == '\n') {
		printf("Please enter string to count: ");
		fgets(input_string, sizeof(input_string), stdin);
	}
	number = word_count(input_string);
	printf("The string has %d words!", number);
	return 0;
}

