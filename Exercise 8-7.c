/*Exercise 8-7: The number 85 is pronounced “eighty-five,” not “eight five.” Modify the previous program to handle the numbers through 100 so that all numbers come out as we really say them. For example, 13 would be “thirteen” and 100 would be “one hundred.”

Steve Oualline. Practical C Programming (Nutshell Handbooks) (Kindle Locations 2640-2642). O'Reilly Media. Kindle Edition. */
#include <stdio.h>
int count, input_number;
int first_number, second_number;
char line[50];

int main() {
    printf("Please enter the random number from 0 to 100: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &input_number);
    first_number = input_number / 10;
    second_number = input_number % 10;
    printf("first number is %d, second_number is %d\n", first_number, second_number);
    switch(first_number) {
        case 0:
        {
            switch(second_number) {
                case 0:
                {
                printf("zero\n");
                break;
                }
                case 1:
                {
                printf("one\n");
                break;
                }
                case 2:
                {
                printf("two\n");
                break;
                }
                case 3:
                {
                printf("three\n");
                break;
                }
                case 4:
                {
                printf("four\n");
                break;
                }
                case 5:
                {
                printf("five\n");
                break;
                }
                case 6:
                {
                printf("six\n");
                break;
                }
                case 7:
                {
                printf("seven\n");
                break;
                }
                case 8:
                {
                printf("eight\n");
                break;
                }
                case 9:
                {
                printf("nine\n");
                break;
                }
            }
         break; 
        }
        case 1:
        {
			switch(second_number) {
                case 0:
                {
                printf("ten\n");
                break;
                }
                case 1:
                {
                printf("eleven\n");
                break;
                }
                case 2:
                {
                printf("twelve\n");
                break;
                }
                case 3:
                {
                printf("thirteen”\n");
                break;
                }
                case 4:
                {
                printf("fourteen\n");
                break;
                }
                case 5:
                {
                printf("fifteen\n");
                break;
                }
                case 6:
                {
                printf("sixteen\n");
                break;
                }
                case 7:
                {
                printf("seventeen\n");
                break;
                }
                case 8:
                {
                printf("eighteen\n");
                break;
                }
                case 9:
                {
                printf("nineteen\n");
                break;
                }
            }
         break;   
        }
        case 2:
        {
		 printf("twenty ");
			switch(second_number) {
                case 0:
                {
                printf("\n");
                break;
                }
                case 1:
                {
                printf("one\n");
                break;
                }
                case 2:
                {
                printf("two\n");
                break;
                }
                case 3:
                {
                printf("three\n");
                break;
                }
                case 4:
                {
                printf("four\n");
                break;
                }
                case 5:
                {
                printf("five\n");
                break;
                }
                case 6:
                {
                printf("six\n");
                break;
                }
                case 7:
                {
                printf("seven\n");
                break;
                }
                case 8:
                {
                printf("eight\n");
                break;
                }
                case 9:
                {
                printf("nine\n");
                break;
                }
            }
         break;   
        }
        case 3:
        {
			printf("thirty ");
			switch(second_number) {
                case 0:
                {
                printf("\n");
                break;
                }
                case 1:
                {
                printf("one\n");
                break;
                }
                case 2:
                {
                printf("two\n");
                break;
                }
                case 3:
                {
                printf("three\n");
                break;
                }
                case 4:
                {
                printf("four\n");
                break;
                }
                case 5:
                {
                printf("five\n");
                break;
                }
                case 6:
                {
                printf("six\n");
                break;
                }
                case 7:
                {
                printf("seven\n");
                break;
                }
                case 8:
                {
                printf("eight\n");
                break;
                }
                case 9:
                {
                printf("nine\n");
                break;
                }
			}
         break;   
        }
        case 4:
        {
			printf("fourty ");
			switch(second_number) {
                case 0:
                {
                printf("\n");
                break;
                }
                case 1:
                {
                printf("one\n");
                break;
                }
                case 2:
                {
                printf("two\n");
                break;
                }
                case 3:
                {
                printf("three\n");
                break;
                }
                case 4:
                {
                printf("four\n");
                break;
                }
                case 5:
                {
                printf("five\n");
                break;
                }
                case 6:
                {
                printf("six\n");
                break;
                }
                case 7:
                {
                printf("seven\n");
                break;
                }
                case 8:
                {
                printf("eight\n");
                break;
                }
                case 9:
                {
                printf("nine\n");
                break;
                }
			}
         break;   
        }
        case 5:
        {
			printf("fifty ");
			switch(second_number) {
                case 0:
                {
                printf("\n");
                break;
                }
                case 1:
                {
                printf("one\n");
                break;
                }
                case 2:
                {
                printf("two\n");
                break;
                }
                case 3:
                {
                printf("three\n");
                break;
                }
                case 4:
                {
                printf("four\n");
                break;
                }
                case 5:
                {
                printf("five\n");
                break;
                }
                case 6:
                {
                printf("six\n");
                break;
                }
                case 7:
                {
                printf("seven\n");
                break;
                }
                case 8:
                {
                printf("eight\n");
                break;
                }
                case 9:
                {
                printf("nine\n");
                break;
                }
			}
         break;   
        }
        case 6:
        {
			printf("sixty ");
			switch(second_number) {
                case 0:
                {
                printf("\n");
                break;
                }
                case 1:
                {
                printf("one\n");
                break;
                }
                case 2:
                {
                printf("two\n");
                break;
                }
                case 3:
                {
                printf("three\n");
                break;
                }
                case 4:
                {
                printf("four\n");
                break;
                }
                case 5:
                {
                printf("five\n");
                break;
                }
                case 6:
                {
                printf("six\n");
                break;
                }
                case 7:
                {
                printf("seven\n");
                break;
                }
                case 8:
                {
                printf("eight\n");
                break;
                }
                case 9:
                {
                printf("nine\n");
                break;
                }
			}
         break;   
        }
        case 7:
        {
			printf("seventy ");
			switch(second_number) {
                case 0:
                {
                printf("\n");
                break;
                }
                case 1:
                {
                printf("one\n");
                break;
                }
                case 2:
                {
                printf("two\n");
                break;
                }
                case 3:
                {
                printf("three\n");
                break;
                }
                case 4:
                {
                printf("four\n");
                break;
                }
                case 5:
                {
                printf("five\n");
                break;
                }
                case 6:
                {
                printf("six\n");
                break;
                }
                case 7:
                {
                printf("seven\n");
                break;
                }
                case 8:
                {
                printf("eight\n");
                break;
                }
                case 9:
                {
                printf("nine\n");
                break;
                }
			}
         break;   
        }
        case 8:
        {
			printf("eighty ");
			switch(second_number) {
                case 0:
                {
                printf("\n");
                break;
                }
                case 1:
                {
                printf("one\n");
                break;
                }
                case 2:
                {
                printf("two\n");
                break;
                }
                case 3:
                {
                printf("three\n");
                break;
                }
                case 4:
                {
                printf("four\n");
                break;
                }
                case 5:
                {
                printf("five\n");
                break;
                }
                case 6:
                {
                printf("six\n");
                break;
                }
                case 7:
                {
                printf("seven\n");
                break;
                }
                case 8:
                {
                printf("eight\n");
                break;
                }
                case 9:
                {
                printf("nine\n");
                break;
                }
			}
         break;   
        }
        case 9:
        {
			printf("ninety ");
			switch(second_number) {
                case 0:
                {
                printf("\n");
                break;
                }
                case 1:
                {
                printf("one\n");
                break;
                }
                case 2:
                {
                printf("two\n");
                break;
                }
                case 3:
                {
                printf("three\n");
                break;
                }
                case 4:
                {
                printf("four\n");
                break;
                }
                case 5:
                {
                printf("five\n");
                break;
                }
                case 6:
                {
                printf("six\n");
                break;
                }
                case 7:
                {
                printf("seven\n");
                break;
                }
                case 8:
                {
                printf("eight\n");
                break;
                }
                case 9:
                {
                printf("nine\n");
                break;
                }
			}
         break;   
		}
        case 10:
        {
			printf("One hundred\n");
         break;   
        }
	}
    return 0;
}