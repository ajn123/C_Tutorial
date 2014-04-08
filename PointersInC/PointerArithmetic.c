/*
 * PointerArithmetic.c
 *
 *  Created on: Mar 28, 2013
 *      Author: Aj Norton
 */
#include<stdio.h>

int main(void) {

	/**
	 * I declared a multidimensional array of 2 rows and 10 columns
	 * The way pointer arithmetic works is that is treats the locations in
	 * memory as the same as ONE array so you can do the same operators on
	 * 1-D arrays as 2-D or bigger arrays.  All the memory of an array is stored
	 * continuously together.
	 */
	int A[2][10] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};

	int *Pointer = A;//Assigns  pointer address of the array of position [0][0]

	Pointer =Pointer + 7;// now at position 8


	printf("%d \n",*Pointer);// prints out 7.


	Pointer -= 4; //Now at position 3.


	printf("%d \n",*Pointer);// prints out 3.

	Pointer += 15;// Going to the second tow, totally valid.

	printf("%d",*Pointer );//Prints out 18








	return 0;
}

