#include <stdio.h>
#include <string.h>
/*Exercise 4-1: Write a program to print your name, social security number, and date of birth.*/
char my_name[] = "Nguyen Cong Anh";
int social_number = 123456789;
char date_of_birth[] = "28-02-1984";
int main() {
	printf("My name is %s\n", &my_name);
	printf("My social number is %d\n", social_number);
	printf("Date of Birth %s\n", &date_of_birth);
	return 0;
 }