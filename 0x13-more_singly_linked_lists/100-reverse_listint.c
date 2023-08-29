#include "lists.h"

/**
  * reverse_listint - A function that reverses a linked list
  * @head: pointer to a pointer to the head of the list
  * Return: A pointer to first node of the rev list
  */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *nt, *p = NULL;

	while (*head)
	{
		nt = (*head)->next;
		(*head)->n = p;
		p = *head;
		*head = nt;
	}

	*head = p;
	return (*head);
}
