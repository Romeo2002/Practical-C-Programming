/*Exercise 8-3: Write a program to average n numbers.

Steve Oualline. Practical C Programming (Nutshell Handbooks) (Kindle Locations 2635-2636). O'Reilly Media. Kindle Edition. */
#include <stdio.h>

int i, counter;
float total = 0;
float average;
char line[50];
int value[50];

int main() {
    printf("Please enter the number need to calculate: ");
    fgets(line, sizeof(line),stdin);
    sscanf(line, "%d", &counter);
    for (i=0; i < counter; i++) {
    printf("Please enter the value number %d: ", i+1);
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &value[i]);
    total = total + value[i];
    printf("%f", total);
    }
    printf("average value is %f", total/counter);
    return 0;
}