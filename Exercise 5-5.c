/*Write a program that takes hours and minutes as input, and then outputs the total number of minutes. (1 hour 30 minutes = 90 minutes).

Steve Oualline. Practical C Programming (Nutshell Handbooks) (Kindle Locations 1804-1805). O'Reilly Media. Kindle Edition. */

#include <stdio.h>

int hour, minutes, total;
char line[50];

int main() {
	printf("Enter the hours and minutes to calculate!");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%d %d", &hour, &minutes);
	printf("You have enter %d hours and %d minutes\n", hour, minutes);
	total = hour * 60 + minutes;
	printf("%d hours and %d minutes are equal to %d minutes", hour, minutes, total);
}