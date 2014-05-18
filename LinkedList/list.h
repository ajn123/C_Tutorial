/*
 * C_tutorial.h
 *
 *  Created on: May 17, 2014
 *      Author: marknorton
 */
#include <stdlib.h>

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#ifndef C_TUTORIAL_H_
#define C_TUTORIAL_H_



struct list_elem
{
	struct list_elem *prev;     /* Previous list element. */
	struct list_elem *next;     /* Next list element. */
};

/* List. */
struct list
{
	struct list_elem head;      /* List head. */
	struct list_elem tail;      /* List tail. */
};


struct person{
	int age;
	char firstInitial;
	float height;
	struct list_elem elem;
};





#define list_entry(LIST_ELEM, STRUCT, MEMBER)           \
        ((STRUCT *) ((uint8_t *) &(LIST_ELEM)->next     \
                     - offsetof (STRUCT, MEMBER.next)))



#endif /* C_TUTORIAL_H_ */
