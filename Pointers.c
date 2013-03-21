/*
 * Pointers.c
 *
 *  Created on: Mar 21, 2013
 *      Author: Aj Norton
 */
#include <stdio.h>

int main(void) {
	int i = 90;

	/**
	 * Pointers are similar to variables in that they simply store values.
	 * The difference is that there values are ADDRESSES to non-pointer variables
	 * or possible other pointers (in the case of a double pointer.
	 */

	/**
	 * the "*" symbol is called the dereferencing symbol and this is getting the value
	 * contained within the pointer
	 */

	/**
	 * the "&" symbol is the address symbol and returns the address, also known as
	 * where in memory the variable is stored.
	 */

	/**
	 *The below declaration is declaring a DOUBLE pointer (**)
	 *which is a pointer to a pointer.  It is possible to have a triple pointer (***)
	 *and beyond (infinite possibilities).
	 */



	int **q1 = NULL; // Pointers should be initialized to NULL or 0 when not used.
	int *q2 = &i; //pointers must be assigned addresses.

	/**
	 * Since q2 contains the address of variable i.  The variable i can be indirectly changed
	 *  by using the dereferencing symbol (*).  This changes i to 45 since q2 is pointing to i.
	 */
	*q2 = 45;

	q1 = &q2;  // the double pointer needs the address of a pointer.

	//the next 3 statements print out identical addresses
	//each addresses will be different when run on different computers
	printf("%d \n", *q1); // prints out the value stored in q1, which is the address of i

	printf("%d \n", q2); // prints out the value of q2, which is the address of i (same as above).

	printf("%d \n", &i);// prints out the address of i too.

	printf("%d \n", *q2); // prints out the value of q2 (45).

	printf("%d \n", i);// prints out 45 as well.

	printf("%d \n", **q1);// You can double dereference something to get a value as well
	//(if it is a double pointer)  This will print out 45 as well.



	return 0;
}

