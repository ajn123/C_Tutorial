/*
 * fork.c
 *
 *  Created on: Jan 23, 2014
 *      Author: marknorton
 */

#include <stdio.h>

//constant

int main(void) {

	/**
	 * the fork function runs the same program in a new child process that is a
	 * duplicate of the parent.
	 */

	printf("hello  \n");
	int a = fork();

	int x = 1;

	if (a == 0) {
		printf("x is %d \n", ++x);
		exit(0);
	}

	printf("other x is %d \n", --x);

	/**
	 other x is 0
	 x is 2
	 */

	return 0;
}

