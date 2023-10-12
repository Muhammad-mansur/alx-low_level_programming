#include "lists.h"

/**
  * add_dnodeint - adds a new node at the beginning of a list
  *
  * @head: double pointer
  * @n: integer n
  *
  * Return: address of the new element
  */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	/* Memory Allocation for the new node */
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	/* Check if memory allocation failed */
	if (newNode == NULL)
		return (NULL);

	/* Initialize the new node */
	newNode->n = n;
	newNode->next = *head;
	newNode->prev = NULL;

	/* update previous pointer */
	if (*head != NULL)
		(*head)->prev = newNode;

	/* update the head pointer */
	*head = newNode;

	return (newNode);
}
