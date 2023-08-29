#include "lists.h"

/**
  * reverse_listint - A function that reverses a linked list
  * @head: pointer to a pointer to the head of the list
  * Return: A pointer to first node of the rev list
  */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *next, *p = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = p;
		p = *head;
		*head = next;
	}

	*head = p;
	return (*head);
}
