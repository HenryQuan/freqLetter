/* This is a question from my computing test.
The question is that get the most frequent letter from a short text.
Example: I am HenryQuan.
It prints "N occurs 2 times".

02/09/2016
HenryQuan
*/

#include <stdio.h>

#define UPPER_START 'A'
#define UPPER_END 'Z'
#define LOWER_START 'a'
#define LOWER_END 'z'
#define ALPHABET 26

int letterToNumber(int letter);
int numberToLetter(int letter);
int getMostFreq(int alphabet[ALPHABET]);
void countMostFreqLetter(int alphabet[ALPHABET]);

int main(int argc, char *argv[]) {
	
	// I forgot to initialised this array to ZERO.
	int alphabet[ALPHABET] = {0};
	countMostFreqLetter(alphabet);
	
	return 0;
	
}

int letterToNumber(int letter) {
	
	int result = 0;
	// Since the result is UPPERCASE, convert all lowercase to uppercase.
	if (letter >= LOWER_START && letter <= LOWER_END) {
		letter -= LOWER_START;
		letter += UPPER_START;
	}
	
	result = letter - UPPER_START;
	return result;
	
}

int numberToLetter(int letter) {
	
	int result = 0;
	result = letter + UPPER_START;
	return result;
	
}

int getMostFreq(int alphabet[ALPHABET]) {
	
	// Set the first element to be biggest fro comparing.
	int freq = alphabet[0];
	int charcter = 0;
	
	int i = 1;
	while (i < ALPHABET) {
		if (freq < alphabet[i]) {
			freq = alphabet[i];
			charcter = i;
		}
		// >_< I forgot i++;
		i++;
	}
	
	return charcter;
	
}

void countMostFreqLetter(int alphabet[ALPHABET]) {
	
	int ch;
	int number = 0;
	while ((ch = getchar()) != '\n') {
		if ((ch >= UPPER_START && ch <= UPPER_END)
		|| (ch >= LOWER_START && ch <= LOWER_END)) {
			// To see if it is a alphabet.
			number = letterToNumber(ch);
			alphabet[number]++;
		}
	}
	int freq = getMostFreq(alphabet);
	int character = numberToLetter(freq);
	printf("\n%c occurs %d times\n", character, alphabet[freq]);
	getchar();
	
}
