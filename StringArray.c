/*
 * StringArray.c
 *
 *  Created on: Apr 16, 2013
 *      Author: Aj Norton
 */

#include <stdio.h>

int main(void) {
	char *stringArray[5] = { 0 }; // create an array of char pointers which can be thought of as strings.

	//assigns different strings at different positions.
	stringArray[0] = "hello";
	stringArray[1] = "my ";
	stringArray[2] = "name";
	stringArray[3] = "is";
	stringArray[4] = "A.J.";

	printf("%s", stringArray[0]); //prints out hello.
	printf("%s", stringArray[1]); //prints out my .
	printf("%s", stringArray[2]); //prints out name.

	return 0;
}

