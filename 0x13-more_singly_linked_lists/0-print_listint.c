#include "lists.h"

/**
  * print_listint - function that prints all the elements of a list
  * @h: pointer
  * Return: the number of nodes
  */

size_t print_listint(const listint_t *h)
{
	size_t cnt = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		cnt++;
	}

	return (cnt);
}
