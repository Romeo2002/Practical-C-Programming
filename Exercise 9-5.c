/*Exercise 9-5: Write a function that returns the maximum value of an array of numbers.

Steve Oualline. Practical C Programming (Nutshell Handbooks) (Kindle Locations 2919-2920). O'Reilly Media. Kindle Edition. */

#include <stdio.h>

int maximum(int array[], int length) {
    int count;
    int maximum_value;
    maximum_value = array[0];
    for ( count = 0; count < (length -1); count++) {
        if (maximum_value < array[count]) {
            maximum_value = array[count];
        }
    }
    return maximum_value;
}

int main() {
    int max;
    int array[] = {1,2,3,5,6,88,999,1111,55,512};
    int array_length = sizeof(array)/sizeof(array[0]);
    max = maximum(array, array_length);
    printf("The maximum value in this array is %d", max);
    return 0;
}