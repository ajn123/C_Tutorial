/*
 * Recursion.c
 *
 *  Created on: Mar 21, 2013
 *      Author: Aj Norton

 
 */
#include <stdio.h>

int factorial(int i);// method header so the the compiler knows the function is defined below main

int main(void)
{
  printf("%d", factorial(5));


	return 0;
}


int factorial(int i)
{
	if(i <= 1)
	{
		return 1;
	}
	else
	{
		return factorial(i-1)*i; //returns factorial times the inputed value, effectively multiplying n*(n-1)*(n-2)*(n-3) = n!
	}
}






