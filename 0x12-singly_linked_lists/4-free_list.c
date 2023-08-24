#include "lists.h"

/**
  * free_list - function to free a list
  * @head: pointer
  */

void free_list(list_t *head)
{
	list_t *t;

	while (head)
	{
		t = head;
		head = head->next;
		free(t->str);
		free(t);
	}
}
