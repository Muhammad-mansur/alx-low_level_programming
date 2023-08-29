#include "lists.h"

/**
  * get_nodeint_at_index - returns the nth node of a linked list
  * @head: pointer to the head of the list
  * @index: index to retrieve
  * Return: return pointer to the nth node
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *present = head;
	unsigned int a = 0;

	while (present)
	{
		if (a == index)
		{
			return (present);
		}
		present = present->next;
		a++;
	}

	return (NULL);
}
