/*Exercise 8-1: Print a checker board (8-by-8 grid). Each square should be 5-by-3 characters wide. A 2-by-2 example follows:

Steve Oualline. Practical C Programming (Nutshell Handbooks) (Kindle Locations 2623-2624). O'Reilly Media. Kindle Edition. */
#include <stdio.h>

int main() {
    int counter, number_of_line;
    char line[50];
    printf("Please enter the number of line to draw:\n"); // number = multily of 4
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &number_of_line);
    for (counter = 0; counter <= number_of_line; counter++) {
        if ((counter%4)==0) {
            printf("+-----+-----+\n");
        } else {
            printf("|     |     |\n");
        }
    }
    return 0;
}