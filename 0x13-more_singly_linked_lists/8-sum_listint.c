#include "lists.h"

/**
  * sum_listint - A function that returns the sum
  * of all the data (n) of a linked list
  *
  * @head: pointer to the head of the list
  *
  * Return: sum of all the data values or 0 if the list is empty
  */

int sum_listint(listint_t *head)
{
	listint_t *present = head;
	int tally = 0;

	while (present)
	{
		tally = tally + present->n;
		present = present->next;
	}

	return (tally);
}
