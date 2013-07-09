
#include <stdio.h>
#include <stdlib.h>

 struct node{
	int a;
	struct node *next;

};
typedef struct node Node;



int main()
{
	Node *current, *head;
	head = NULL;

	for(int i  = 1; i <= 10;i++)
	{
      current = (Node *) malloc(sizeof(Node));
      current->a = i;
      current->next = head;// NULL the first time
      head = current;
	}

	current = head;
	while(current)
	{
		printf("%d \n", current->a);
		current = current->next;
	}
	return 0;
}

