#include "lists.h"

/**
  * free_listint2 - a function that frees a list and sets the head to NULL
  * @head: a pointer to a pointer to the head of the list
  * Return: nothing
  */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL || *head == NULL)
	{
		return;
	}

	while (*head)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}

	/* set the head to NULL */
	*head = NULL;
}
