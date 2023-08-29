#include "lists.h"

/**
  * print_listint_safe - prints linked list
  * @head: pointer to the head of the list
  * Return: The number of nodes in the list
  */

size_t print_listint_safe(const listint_t *head)
{
	size_t cnt = 0, idx = 0;
	const listint_t *present = head;
	const listint_t *printed[1024];

	while (present != NULL)
	{
		for (idx = 0; idx < cnt; idx++)
		{
			if (printed[idx] == present)
			{
				printf(" [%p] %d\n", (void *)present, present->n);
				return (cnt);
			}
		}

		printed[cnt++] = present;
		printf("[%p] %d\n", (void *)present, present->n);
		present = present->next;
	}

	return (cnt);
}
