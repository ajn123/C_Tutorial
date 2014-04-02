/*
 * HeaderExample.c
 *
 *  Created on: Mar 27, 2013
 *      Author: Aj Norton
 */


/**
 * I am including the contents of HeaderExample.h, this is literally taking the contents of my .h
 * file and pasting them where the include is for my C file to view.
 */
#include "HeaderExample.h"

int main(void) {

	int i = 10;
	i = add(i);

	printf("%d", i);

	return 0;
}


