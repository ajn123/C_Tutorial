/*
 * FuncsWithPointers.c
 *
 *  Created on: Mar 26, 2013
 *      Author: Aj Norton
 */
#include <stdio.h>

void cubeByPointer(int *); // takes an address as a pointer.
int cubeByParameter(int); // takes an integer as a parameter.

int main(void) {

	int i = 9;
	int *Ptr = &i;

	cubeByParameter(i); //copies value into function does not change actual value of i.
	//If I assigned the above value to i, ( i = cubeByParameter(i); ) that will change the value
	//of i as well.

	printf("%d \n", i);

	cubeByPointer(Ptr); //Changes the value at the ADDRESS of i, so this will change the value of i outside the main function.
	printf("%d", i);

	return 0;
}

void cubeByPointer(int *i) {
	*i = *i * *i * *i; // note that I am using a indirection operator and a multiplication operator, which are the same symbol (*)
	//in this example.
}

int cubeByParameter(int i) {

	i = i * i * i;
	return i;
}

