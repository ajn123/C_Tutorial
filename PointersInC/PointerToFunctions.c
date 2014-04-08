/*
 * PointerToFunctions.c
 *
 *  Created on: Apr 8, 2013
 *      Author: Aj Norton
 */
#include <stdio.h>

int f(int i) {
	return i;
}

int main(void) {

	int (*funcs[])(int) = {f,f,f}; //Array of Pointers to multiple functions.

	int (*fFunction)(int) = f; //Pointer to function

	printf("%d", (*funcs)(65));

}

