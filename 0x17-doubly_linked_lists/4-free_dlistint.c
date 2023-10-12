#include "lists.h"

/**
  * free_dlistint - frees a doubly linked list
  *
  * @head: ---
  *
  * Return: nothing.
  */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *cnt;

	while (head)
	{
		cnt = head;
		head = head->next;
		free(cnt);
	}
}
