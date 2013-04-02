/*
 * PointerMethods.c
 *
 *  Created on: Apr 2, 2013
 *      Author: Aj Norton
 */

#include <stdio.h>

int cube(int *); //takes a pointer, either a pointer of a variable address.

int* assignNinety(int *); //takes a pointer AND returns a pointer.

int main(void) {

	int i = 60;

	int *iPtr = &i;

	cube(&i); //pass in address of i which is valid. you could also pass in iPtr.

	printf("%d \n", *assignNinety(&i));
	/**prints out 90, not how I dereference
	 it because the method returns a pointer.
	 This does not change the value of i, as the i in main and the i in
	 assignNintely are completely different.
	 */

	printf("%d", i); //prints out the cube of 60 (21600).

	return 0;
}

int cube(int *number) {
	*number = *number * *number * *number; //cubing the number
	return *number;  //returns the newly cubed number.

}

int * assignNinety(int * integer) {  //returns a pointer and takes a pointer.
	int i = 90;

	integer = &i;

	return integer;

}
