/*Exercise 8-5: Write a program that reads a character and prints out whether or not it is a vowel or a consonant.
These letters are vowels in English:
	A, E, I, O, U, and sometimes Y.
The rest of the letters of the alphabet are consonants:
	B, C, D, F, G, H, J, K, L, M, N, P, Q, R, S, T, V, W, X, and Z
Steve Oualline. Practical C Programming (Nutshell Handbooks) (Kindle Locations 2637-2638). O'Reilly Media. Kindle Edition. */
#include <stdio.h>
#include <ctype.h>
#include <string.h>

char vowels[] = "A,E,I,O,U,Y";
char consonants[] = "B,C,D,F,G,H,J,K,L,M,N,P,Q,R,S,T,V,W,X,Z";
char character;
char line[50];

int main() {
	printf("Please enter a character: ");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%c", &character);
	while ((isalpha(character)) == 0) {
		printf("It's not a character. Please enter a character: ");
		fgets(line, sizeof(line), stdin);
		sscanf(line, "%c", &character);
	}
	character = toupper(character);
	if ((strchr(vowels, character)) != 0) {
		printf("This is a vowel!\n");
	}
	else {
		printf("This is a consonant!\n");
	}
	return 0;
}