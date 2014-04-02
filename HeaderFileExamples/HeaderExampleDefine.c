/*
 * HeaderExampleDefine.c
 *
 *  Created on: Mar 27, 2013
 *      Author: Aj Norton
 */
#include "HeaderExample.h"




/**
 * Method defined in another file but will be linked with
 * the other c file through the h file at compile time.
 */
int add(int i) {
	return i += i;
}




