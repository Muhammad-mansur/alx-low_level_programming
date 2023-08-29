#include "lists.h"

/**
  * print_listint_safe - prints linked list
  * @head: pointer to the head of the list
  * Return: The number of nodes in the list
  */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *low, *high;
	size_t cnt = 0;

	if (head == NULL)
	{
		exit(98);
	}

	low = head;
	high = (head->next) ? head->next : NULL;

	while (high && high->next)
	{
		if (high == low)
		{
			high = head;

			while (high != low)
			{
				printf("[%p] %d\n", (void *)high, high->n);
				cnt++;
				high = high->next;
				low = low->next;
			}

			printf("[%p] %d\n", (void *)high, high->n);
			cnt++;
			return (cnt);
		}
		low = low->next;
		high = (high->next) ? high->next->next : NULL;
		cnt++;
	}
	do
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	while (head);
	return (cnt);
}
