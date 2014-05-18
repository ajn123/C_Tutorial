/**
 * Purpose:  This is an example of a structure independent
 * linked list in C.  This way you can have a linked list
 * that is independent of the structure you want to link
 * together.  This implementation is a doubly list with
 * head and tail sentinal nodes for convenience.
 */

#include <stdio.h>
#include <assert.h>
#include "list.h"


void list_initialize(struct list * list)
{
	assert(list != NULL);

	list->head.prev = NULL;
	list->tail.next = NULL;

	list->head.next = &list->tail;
	list->tail.prev = &list->head;
}

struct list_elem * list_begin(struct list * list)
{
	return list->head.next;
}

void insert(struct list_elem * before,
		struct list_elem * element){

	element->next = before;
	element->prev = before->prev;

	before->prev->next = element;
	before->prev = element;
}

void list_push_front(struct list * list,
		struct list_elem * elem){

	insert(list_begin(list), elem);
}


struct list_elem * list_remove(struct list_elem * elem)
{

	elem->prev->next = elem->next;
	elem->next->prev = elem->prev;

	elem->next = NULL;
	elem->prev = NULL;

	//return elem->next;
}

struct list_elem * list_pop_front(struct list * list)
{
	struct list_elem * begin = list_begin(list);
	remove(begin);
	return begin;

}



int main()
{
	struct list * list = malloc(sizeof(struct list));
	list_initialize(list);
	struct person * aj =
			malloc(sizeof(struct person));

	aj->age = 33;
	aj->firstInitial = 'a';
	aj->height = 170;


	struct person * bob =
				malloc(sizeof(struct person));

		bob->age = 99;


	list_push_front(list,&aj->elem);
	list_push_front(list,&bob->elem);

	struct person * returned =
			list_entry(list_pop_front(list),
					struct person,
					elem);
	printf("%d",returned->age);



	return 0;
}
