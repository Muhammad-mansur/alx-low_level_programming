#include "lists.h"

/**
  * add_node - A function that adds a new node at the
  * beginning of a list
  * @head: pointer to the first node
  * @str: duplicated string to be saved in the new node
  * Return: address of the new element
  */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->str = strdup(str);
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
