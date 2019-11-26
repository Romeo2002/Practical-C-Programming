/*Exercise 8-6: Write a program that converts numbers to words. For example, 895 results in “eight nine five.”

Steve Oualline. Practical C Programming (Nutshell Handbooks) (Kindle Locations 2639-2640). O'Reilly Media. Kindle Edition. */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int input_number;
char input_string[50];
char output_string[50];
char line[50];
int count;

int main() {
    printf("please enter number to convert: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &input_number);
    sprintf(input_string,"%d", input_number);
    for (count = 0; count <= strlen(input_string); count++) {
        switch (input_string[count]) {
            case '0':
                strcpy(output_string, "zero");
                printf("%s ", output_string);
                break;
            case '1':
                strcpy(output_string,"one");
                printf("%s ", output_string);
                break;
            case '2':
                strcpy(output_string,"two");
                printf("%s ", output_string);
                break;
            case '3':
                strcpy(output_string,"three");
                printf("%s ", output_string);
                break;
            case '4':
                strcpy(output_string,"four");
                printf("%s ", output_string);
                break;
            case '5':
                strcpy(output_string,"five");
                printf("%s ", output_string);
                break;
            case '6':
                strcpy(output_string,"six");
                printf("%s ", output_string);
                break;
            case '7':
                strcpy(output_string,"seven");
                printf("%s ", output_string);
                break;
            case '8':
                strcpy(output_string,"eight");
                printf("%s ", output_string);
                break;
            case '9':
                strcpy(output_string,"nine");
                printf("%s ", output_string);
                break;
            default:
                break;
        }
    }
return 0;
}