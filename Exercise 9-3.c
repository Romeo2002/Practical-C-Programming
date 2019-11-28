/*Exercise 9-3: Write a function count( number, array, length) that counts the number of times number appears in array. The array has length elements. The function should be recursive. Write a test program to go with the function.

Steve Oualline. Practical C Programming (Nutshell Handbooks) (Kindle Locations 2914-2917). O'Reilly Media. Kindle Edition. */
#include <stdio.h>

int count(int number, int array[], int length) {
    int result = 0;
    int i; // counter for array
    if (length == 0) {
        result = 0;
        }
    if (length == 1) {
        if(array[length-1] == number) 
        {
            result = 1;
        } else 
        {
            result = 0;
        }
    }
    for (i=0; i < length; i++) {
        if (array[i] == number) {
            result++;
        }
    }
    return result;
}

int main() {
    int array[] = {1,2,5,6,7,8,9,90,2,1,3,4,5,6,7,8,9,0};
    int numbers_,number_to_count;
    printf("please enter the number to count: ");
    scanf("%d", &number_to_count);
    numbers_ = count(number_to_count, array, 18);
    printf("This array have %d number %d", numbers_,number_to_count);
    return 0;
}

