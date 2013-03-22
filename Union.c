/*
 * Union.c
 *
 *  Created on: Mar 22, 2013
 *      Author: Aj Norton
 */

#include <stdio.h>

/**
 * A union only allocates memory for the biggest member (variable type).
 * The members are stored in the same address so declaring one will overwrite the
 * other.  Because of this we can store either i or d but NOT both.
 */
union Number {
	int i;
	double d;
};

int main(void) {

	/** using a union type we can make arrays that can contain multiple types
	 * like the one shown below.  A problem is that we do not know which exact positions
	 * contain integers and which contain doubles.
	 */
	union Number array[10] = { 1, 2.1, 3.14, 4, 5, 6, 7, 9.9, 9000, 100.1 };

	return 0;
}

