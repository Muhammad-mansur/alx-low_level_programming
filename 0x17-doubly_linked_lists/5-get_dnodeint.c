#include "lists.h"

/**
  * get_dnodeint_at_index - returns the nth node
  * of a doubly linked list
  *
  * @head: ---
  * @index: ---
  *
  * Return: if the node does not exist, return NULL
  */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int cnt = 0;

	/* Iterate through the list */
	while (head != NULL && cnt < index)
	{
		head = head->next;
		cnt++;
	}

	/* return the current node */
	if (cnt == index)
		return (head);
	else
		return (NULL);
}
