/*
 * structs.c
 *
 *  Created on: Mar 22, 2013
 *      Author: Aj Norton
 */
#include <stdio.h>

struct player {

	int number;
	char position;
	struct player *pointer;

};

int main(void) {

	struct player robin = { 33, 'r', NULL };
	struct player alfred = { 12, 'c', &robin };

	struct player *batman = &alfred;

	for (; batman != NULL ; batman = batman->pointer) {
		printf("%d \n", batman->number);
	}

	return 0;
}

