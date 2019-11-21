/*Write a program that takes an integer as the number of minutes, and outputs the total hours and minutes (90 minutes = 1 hour 30 minutes).

Steve Oualline. Practical C Programming (Nutshell Handbooks) (Kindle Locations 1806-1807). O'Reilly Media. Kindle Edition. */

#include <stdio.h>
int minutes, hour, remaining_minutes;
char line[50];
int main() {
	printf("Please enter the number of minutes to convert!\n");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%d", &minutes);
	printf("You have enter %d minutes\n", minutes);
	hour = minutes / 60;
	remaining_minutes = minutes % 60;
	printf("%d minutes is equal to %d hours and %d minutes", minutes, hour, remaining_minutes);
	return 0;
}