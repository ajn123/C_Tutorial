/*
 * Const.c
 *
 *  Created on: Mar 25, 2013
 *      Author: Aj Norton
 */
#include <stdio.h>
#include "magic.h"

//constant

int main(void) {

	const int peter = 90;// constant integer unmodifiable

	int * const Ptr = &peter;//constant pointer, must always be pointing to that address.
	// So I can still change the VALUE stored at that address.  I can not assign this pointer to another address.

	*Ptr = 22;//changes value of the pointer.  This is legal as I am not changing the ADDRESS, which is constant

	
	/**
	 * This is a double constant variable, that means that the dereference can NOT be changed or
	 * the address can NOT be changed.
	 */
	const int * const alex = Ptr;


	printf("%d \n", *Ptr);
	printf("%d", *alex);

	return 0;


}

