/*
 * Switch.c
 *
 *  Created on: Mar 28, 2013
 *      Author: Aj Norton
 */

/**
 * A switch statement is a way to evaluate multiple conditions based on a variable without
 * using a huge if-else statement.
 */
#include <stdio.h>

int main(void) {

	int number;

	printf("what is the meaning of life? please pick 0,1, or 42. \n");

	scanf("%d", &number); // asks for input on the number

	switch (number) { // based on your input in the switch statement, prints out the indicated block then breaks
	//out of the switch block.
	case 0:
		printf("INCORRECT");
		break;
	case 1:
		printf("INCORRECT");
		break;
	case 42:
		printf("CORRECT");
		break;

	default://this is run in the switch statement if none of the cases are executed.
		printf("you selected none of the above");
		break;

	}

	return 0;
}

