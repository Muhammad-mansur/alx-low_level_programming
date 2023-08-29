#include "lists.h"

/**
 * print_listint_safe - prints a linked list, safely
 * @head: list of type listint_t to print
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *present = head;
	size_t cnt = 0;

	while (head)
	{
		cnt++;

		printf("[%p] %d\n", (void *)present, present->n);

		if (*present - present->next)
		{
			present = present->next;
		}

		else
		{
			printf("-> [%p] %d\n", (void *)present->next, present->next->n);
			break;
		}
	}

	return (cnt);
}
