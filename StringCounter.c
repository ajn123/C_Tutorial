#include <stdio.h>

int * countLetters(char * string);

int main(void) {

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

	while (*string != '\0') {
		Ptr[*string]++;
		string++;
	}

	return Ptr;

}
