#include "lists.h"

/**
  * delete_dnodeint_at_index - deletes a node at index
  * of a doubly linked list
  *
  * @head: ---
  * @index: ---
  *
  * Return: 1 if it succeeded, -1 if it failed
  */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int a;
	dlistint_t *cnt = *head;

	if (!cnt)
		return (-1);

	if (index == 0)
	{
		*head = cnt->next;
		if (cnt->next != NULL)
			cnt->next->prev = NULL;
		free(cnt);
		return (1);
	}

	for (a = 0; a < index && cnt != NULL; a++)
		cnt = cnt->next;

	if (!cnt)
		return (-1);

	if (cnt->next)
		cnt->next->prev = cnt->prev;

	if (cnt->prev)
		cnt->prev->next = cnt->next;

	free(cnt);

	return (1);
}
