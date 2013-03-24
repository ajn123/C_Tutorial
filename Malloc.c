/*
 * Malloc.c
 *
 *  Created on: Mar 24, 2013
 *      Author: Aj Norton
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define STRINGSIZE 100


/**
 * If you did not know the size of something such as a array structure, or string at compile time
 * you can allocate memory dynamically be using the malloc() function which will grab the amount
 * of memory you need.
 */

int main(void) {
	char * string = NULL;
	const char *source = "this is a string";

	puts("allocated memory for the pointer");
	string = malloc(STRINGSIZE * sizeof(char));// allocate memory for the string
	//make sure to use the sizeof() command to make your code easily transferable to different computers



	strncpy(string,source,STRINGSIZE);  //copies the string to the variable string.


	printf("this is the string: %s \n", string);

	puts("free memory");
	free(string);// frees the string very important.  Not doing this can cause you
	//to leak memory and your program to crash.

	return 0;

}
