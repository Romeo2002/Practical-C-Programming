/*Exercise 8-2: The total resistance of n resistors in parallel is: Equation   8-1.   Write a program to compute the total resistance for any number of parallel resistors.
Steve Oualline. Practical C Programming (Nutshell Handbooks) (Kindle Locations 2627-2630). O'Reilly Media. Kindle Edition. */

#include <stdio.h>
#include <stdbool.h>

int i, number_of_resistor;
int counter;
int resistor[50];
float total_resistance_value;
char line[50]; 
bool Divby0 = true;

int main() {
    total_resistance_value = 0;
    printf("Please enter the number of resistor: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &number_of_resistor);
    for ( i=0; i <number_of_resistor; i++) {
        printf("Please enter value of the resister number %d: ", (i+1));
        fgets(line, sizeof(line), stdin);
        sscanf(line, "%d", &resistor[i]);
    }
    
    for ( i=0; i <number_of_resistor; i++) {
        if (resistor[i] == 0) {
            printf("Error Value register number %d!\n", (i+1));
            Divby0 = false;
            } else {
            total_resistance_value = total_resistance_value + 1.0/resistor[i];
            }
    }
    if (Divby0) {
    printf("Totol value of resistance is: %f\n",total_resistance_value);
    } else {
        printf("You have enter wrong value\n");
    }
    return 0;
}