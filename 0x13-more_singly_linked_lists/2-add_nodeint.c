#include "lists.h"

/**
  * add_nodeint - function that adds a new node at the beginning of a list
  * @head: pointer to a pointer to the head of the list
  * @n: value to be stored
  * Return: address of the new element, or NULL if it failed
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
