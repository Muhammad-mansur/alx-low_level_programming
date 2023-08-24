#include "lists.h"

/**
  * add_node_end - A function that adds a new node at the end
  * of a list
  * @head: pointer to the first node
  * @str: duplicated string
  * Return: address of the new element
  */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;

	newNode = malloc(sizeof(list_t));
	if (newNode)
	{
		return (NULL);
	}

	newNode->str = strdup(str);
	newNode->next = *tail;
	*tail = newNode;

	return (newNode);
}
