#include "lists.h"
/**
 * print_listint_safe - prints a linked list, safely
 * @head: list of type listint_t to print
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t cnt = 0;

	while (head)
	{
		cnt++;
		printf("[%p] %d\n", (void *)head, head->n);

		if (head - head->next > 0)
		{
			head = head->next;
		}

		else
		{
			if (head->next)
			{
				printf("-> [%p] %d\n", (void *)head, head->next->n);
			}
			break;
		}
	}
	return (cnt);
}
