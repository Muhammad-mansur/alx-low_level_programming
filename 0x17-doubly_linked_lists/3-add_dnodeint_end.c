#include "lists.h"

/**
  * add_dnodeint_end - adds a new node at the end of a list
  *
  * @head: ---
  * @n: ---
  *
  * Return: the address of the new element
  */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;

	if (*head == NULL)
		*head = newNode;
	else
	{
		dlistint_t *cnt = *head;

		while (cnt->next != NULL)
			cnt = cnt->next;

		cnt->next = newNode;
		newNode->prev = cnt;
	}

	return (newNode);
}
