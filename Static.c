/*
 * Static.c
 *
 *  Created on: Mar 29, 2013
 *      Author: Aj Norton
 */
/**
 * Static variables can only be viewed and used in the file
 * ONLY they are declared in.
 */
#include <stdio.h>

int increment(void);

int sum; // Can be used in other files, has external linkage
static int item; //Can only be used in this file. has internal linkage.

int main(void) {

	for (int i = 0; i < 100; i++) {
		sum += increment(); // increases from the previous time increment was run
		//so 1+2+3+4....+99+100 = 5050.
	}

	printf("%d", sum);// prints out 5050, sum of 1 through 100

	return 0;
}

int increment(void) {
	/**
	 * A static variable is stored at the beginning of the execution of the
	 * program and stays there indefinitely throughout the execution
	 * and retains its value.
	 */
	static int pie = 1;	// only initialized once, NOT every time the method is called.
	return pie++;//increments pie AFTER returning it.
}

