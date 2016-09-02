/* This is a question from my computing test.
The question is that get the most frequent letter from a short text.
Example: I am HenryQuan.
It prints "N shows 2 times".

02/09/2016
HenryQuan
*/

#include <stdio.h>

#define ALPHABET 26

int letterToNumber(int letter);
int numberToLetter(int letter);
void getMax(int alphabet[ALPHABET]);
void countMostFreqLetter(int alphabet[ALPHABET]);

int main(int argc, char *argv[]) {
	
	printf("Please enter some texts: \n");
	// I forgot to initialised this array to ZERO.
	int alphabet[ALPHABET] = {0};
	countMostFreqLetter(alphabet);
	
	return 0;
	
}

int letterToNumber(int letter) {
	
	int result = 0;
	return result;
	
}

int numberToLetter(int letter) {
	
	int result = 0;
	return result;
	
}

void getMax(int alphabet[ALPHABET]) {
	
}

void countMostFreqLetter(int alphabet[ALPHABET]) {
	
}
