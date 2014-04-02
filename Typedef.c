/*
 * Typedef.c
 *
 *  Created on: Mar 29, 2013
 *      Author: Aj Norton
 */


#include<stdio.h>

typedef int score; //lets score take the type of int.
typedef double cents;//cents can now be substituted for double.

typedef int * roster;// You can do the same with pointers, just add a '*'.

/**
 * You can use typedef on structs, unions, or enums to make declaring
 * them easier, just add a name after the declaration and a semicolon.
 */
typedef struct{

	char name;

}Cowboy;

int main(void)
{
	score team1 = 20;

	Cowboy cow = {'a'};// Initializing structure.

	roster ros = &team1;

	printf("%d \n", *ros);//prints out 20



	printf("%d \n", team1);//prints 20

	printf("%c", cow.name);//prints 'a'.





	return 0;
}

