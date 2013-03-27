/*
 * BitChange.c
 *
 *  Created on: Mar 21, 2013
 *      Author: Aj Norton
 */
#include <stdio.h>

int main(void) {

	signed int i = 10; // represented in binary as 1010.

	signed int j = 5;  //represented in binary as 0101

	/**
	 *  if EITHER binary position contains a 1 (true) a
	 *  1 is put in the bit position and put together with the
	 *  other positions
	 *  so in the case I am comparing 1010 or 0101 and returning 1111.
	 */
	printf("%d \n", i | j); // prints out 15 (1111).

	/**
	 * Checks to see if both respective bit positions
	 * contain a 1 (true), if that is correct, a 1 is
	 * put in that bit position, if not a 0 is returned.
	 */
	printf("%d \n", i & j); // prints out 0 (0000)

	/**
	 * The "^" is the exclusive-or symbol
	 * it holds true if one is true but NOT both
	 * so will return a if there is only one 1 in
	 * the respective binary position.
	 */
	printf("%d \n", i ^ j); // prints out 15 too.

	/**
	 * the format is ALWAYS  (variable/value) (<< OR >>) (parameter of shift)
	 *
	 *
	 *
	 * Shifts all bits the RIGHT by the indicated parameter.
	 * Depending on the size of the bit it is possible to lose
	 * bits as they fall off the length of the variable.
	 * What this does is essentially multiply your
	 * number by (2^n) where 2 is the parameter
	 */
	printf("%d \n", i << 2); //prints out 40, multiplies 10 by 2^2 = 4

	/**
	 * Shifts all bits the LEFT by the indicated parameter.
	 * Depending on the size of the bit it is possible to lose
	 * bits as they fall off the length of the variable.
	 *
	 */
	printf("%d", j >> 2); // prints out 1.

	return 0;
}

