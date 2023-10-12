#include "lists.h"

/**
  * insert_dnodeint_at_index - inserts a new node at a given position
  *
  * @h: ---
  * @idx: index
  * @n: ---
  *
  * Return: the address of the new node or NUll if it failed
  */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int m;
	dlistint_t *cnt = *h;
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (!newNode)
		return (NULL);

	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = cnt;
		newNode->prev = NULL;

		if (cnt)
		{
			cnt->prev = newNode;
		}

		*h = newNode;
	}
	else
	{
		for(m = 0; m < idx - 1 && cnt != NULL; m++)
			cnt = cnt->next;

		if (m != idx - 1 || cnt == NULL)
		{
			free(newNode);
			return (NULL);
		}
		newNode->next = cnt->next;
		newNode->prev = cnt;
		if (cnt->next != NULL)
			cnt->next->prev = newNode;
	}
	return (newNode);
}
