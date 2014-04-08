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
	 * the fork() function runs the same program in a new child process that is a
	 * duplicate of the parent.  The only difference is that the fork() function returns
	 * TWICE! once in the parent process and once in the child process since you have
	 * duplicated the processes.
	 *
	 * The child process will always return 0 so you can check for that in an if statement
	 * as shown below.
	 *
	 * The parent will return the process ID (pid) of the child for the parent to keep track of
	 * in a jobs list for example.
	 */

	printf("hello  \n");
	int a = fork();

	int x = 1;

	if (a == 0) {//Child check

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

