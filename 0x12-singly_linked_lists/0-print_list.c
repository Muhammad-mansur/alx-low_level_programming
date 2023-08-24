#include "lists.h"

/**
  * print_list - A function thst prints all the elements of a list
  * @h: pointer variable that represents the current node
  * Return: the number of nodes
  */

size_t print_list(const list_t *h)
{
	int nc = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}

		else
		{
			printf("[%lu] %s\n", strlen(h->str), h->str);
		}
		nc++; /* increment the node count */
		h = h->next; /* move to the next node */
	}

	return (nc);
}
