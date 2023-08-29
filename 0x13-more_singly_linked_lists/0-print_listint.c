#include "lists.h"

/**
  * print_listint - function that prints all the elements of a list
  * @h: pointer
  * Return: the number of nodes
  */

size_t print_listint(const listint_t *h)
{
	size_t cnt = 0;
	const listint_t *t = h;

	while (t)
	{
		printf("%d\n", t->n);
		t = t->next;
		cnt++;
	}

	return (cnt);
}
