#include "lists.h"

/**
  * listint_len - function that returns the number of elements
  * in a linked list
  * @h: pointer to the head node
  * Return: the total number of elements in the list
  */

size_t listint_len(const listint_t *h)
{
	size_t cnt = 0;

	while (h)
	{
		h = h->next;
		cnt++;
	}

	return (cnt);
}
