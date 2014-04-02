#include <stdio.h>

int * countLetters(char * string);

int main(void) {

	/**
	 * Pointers are really just placers to keep track of where you are
	 * in a list or array or which variable you are holding.  If you think
	 * of a string as an array of characters, you can use you pointer to
	 * navigate to each character.
	 */

	char * string = "abccdefffffff";

	int *Counter = countLetters(string);

	for (int i = 0; i < 256; i++) {
		printf("%d  is at the position %d \n", Counter[i], i);

	}
	free(Counter);
	Counter = NULL;

	return 0;
}

int * countLetters(char * string) {
	int *Ptr = malloc(sizeof(int) * 256);

	/**
	 * This While loop increments the pointer to the next position in memory which
	 * contains the next character because all the variables are stored next to
	 * each other in memory.
	 */
	while (*string != '\0') {
		Ptr[*string]++;
		string++;
	}

	return Ptr;

}
