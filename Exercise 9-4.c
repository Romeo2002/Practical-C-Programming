/*Exercise 9-4: Write a function that takes a character array and returns a primitive hash code by adding up the value of each character in the array.

Steve Oualline. Practical C Programming (Nutshell Handbooks) (Kindle Locations 2917-2918). O'Reilly Media. Kindle Edition. */

#include <stdio.h>
#include <string.h>

int primitive_hash(char array[6]) {
    int size;
    int count;
    int hash = 0;
    //printf("size of this array is %d\n", size);
    for (count = 0; count < 6; count++) {
        printf("Array value %x\n", array[count]);
        hash = hash + array[count];
    }
    return hash;
}

int main() {
    int hash;
    int count;
    char array[6] = {'a','b','c','d','e','f'};
    for (count = 0; count < 6; count++) {
        printf("array[%d] is %x\n", count, array[count]);
    }
    hash = primitive_hash(array);
    printf("Hashing completed. Here's the value: %x", hash);
    return 0;
}