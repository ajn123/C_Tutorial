/*
 * VoidPointer.c
 *
 *  Created on: Apr 17, 2013
 *      Author: Aj Norton
 */



#include <stdio.h>
#include <stdlib.h>

typedef struct {

	int i;
	void * anything;// Void Pointer declared.

} Structure;

int main(void) {

	Structure s;

	/**
	 * Since malloc returns a void pointer as well I have no problem
	 * making i the size of anything and casting it laster if desired.
	 */
	s.anything = malloc(sizeof(int));

	*((int *) s.anything) = 5; //I can assign the void target a value as long as I put
	//the appropriate cast.

	printf("%d", *((int *) s.anything));	// Prints out 5.

	return 0;
}
