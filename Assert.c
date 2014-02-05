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
 *      Author: Aj Norton
 */
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
	assert(Ptr != NULL);
	assert(size >= 30);
}


