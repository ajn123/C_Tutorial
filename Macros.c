/*
 * Macros.c
 *
 *  Created on: Mar 26, 2013
 *      Author: Aj Norton
 */
#include <stdio.h>
#define SWAP(a,b) a^=b; b^=a; a^=b;  // swaps the two parameters using genius bit manipulation.
#define MAX(a,b) a > b? a :b //easy one line macros
#define MIN(a,b) a > b ? b: a

/**
 * You want to define multiple line macros like the macro below with parenthesis around the macro arguments.
 * Notice the parenthesis around the macro parameters during the assignments.  This is because
 * some actions take precedence over the others (*,+,-) and instead of memorizing them you can cancel
 * this out by using parenthesis.
 *
 * The standard is that macros are defined in capital letters.
 */
#define FOURTHPOWER(a) \
do{\
	(a) = (a)*(a);\
	(a) = (a) * (a);\
}while(0) // No semicolon like you would have on a non-macro do-while loop.
int main(void) {

	int a = 2;
	FOURTHPOWER(a);

	printf("%d", a); //prints out 16

	return 0;
}




