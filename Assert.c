/*
 * Assert.c
 *
 *  Created on: Feb 5, 2014
 *      Author: marknorton
 */
/*
 * Const.c
 *
 *  Created on: Mar 25, 2013
 *      Author: 

 Aj Norton
 */

 //eouaoeueaou
#include <stdio.h>
#include <assert.h>
int magic(int size,int *Ptr);

int main(void) {
	int a = 4;
	int * Ptr = &a;
	magic(10,Ptr);
	puts("done");
	return 0;
}
int magic(int size,int *Ptr)
{
	/**
	 * Assert checks if a certain condition is true, if that condition is not true,
	 * the program terminates with the error of the assert failing.  This is very helpful for
	 * testing and a good coding practice in C to put them anywhere you could get a NULL or
	 * number out of range.
	 *
	 */
	assert(Ptr != (NULL));
	assert(size >= 30);

	return 1;

}


