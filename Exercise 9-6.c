/*Exercise 9-6: Write a function that scans a character array for the character - and replaces it with _.

Steve Oualline. Practical C Programming (Nutshell Handbooks) (Kindle Locations 2920-2921). O'Reilly Media. Kindle Edition. */
#include <stdio.h>
#include <string.h>

void replace_char(char array[]) {
    int count;
    for (count = 0; count < (strlen(array)); count++) {
        if (array[count] == '-') {
            array[count] = '_';
        }
    }
}

int main() {
    char line[50];
    char input_array[50];
    printf("Please enter the array of character: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%s", input_array);
    printf("please wait for converting.....\n");
    replace_char(input_array);
    printf("Convert completed. Here's new array: %s", input_array);
    return 0;
}