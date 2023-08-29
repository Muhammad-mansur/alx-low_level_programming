#include "lists.h"

/**
  * find_listint_loop - finds the loop in a linked list
  * @head: pointer to the head of the list
  * Return: the address of the node where the loop starts
  * or NULL if no loop
  */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *low = head, *high = head;

	while (low && high && high->next)
	{
		low = low->next;
		high = high->next->next;

		if (low == high)
		{
			low = head;

			while (low != high)
			{
				low = low->next;
				high = high->next;
			}

			return (low);
		}
	}

	return (NULL);
}
