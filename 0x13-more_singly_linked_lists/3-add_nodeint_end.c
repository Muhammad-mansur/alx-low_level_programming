#include "lists.h"

/**
  * add_nodeint_end - adds a new node at the end of a list
  * @head: pointet to a pointer to head of the list
  * @n: the value to be stored in the new node
  * Return: Address of the new element, or NULL if it failed
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current;

	/* Allocate memory for the new node */
	listint_t *newNode = malloc(sizeof(listint_t));

	/* check if the memory allocation fails */
	if (newNode == NULL)
	{
		return (NULL);
	}

	/* set the value of the new node to n */
	newNode->n = n;
	/* initialize the next pointer to NULL */
	newNode->next = NULL;

	/* if the list is empty make the new node to the head */
	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	current = *head;

	/* Traverse to the end of the list */
	while (current->next)
	{
		current = current->next;
	}

	/* set the last node's next pointer to the new node */
	current->next = newNode;

	/* return the address of the new node */
	return (newNode);
}
