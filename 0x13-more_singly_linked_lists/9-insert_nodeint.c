#include "lists.h"

/**
  * insert_nodeint_at_index - inserts a new node at a given position
  *
  * @head: pointer to the address of the head of the list
  * @idex: index of the list where the new node should be added
  * @n: data value to be assigned to the new node
  *
  * Return: The address of the new node or NULL if it failed
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int cnt = 0;
	listint_t *newNode, *present = *head;

	if (head == NULL)
	{
		return (NULL);
	}

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	while (present)
	{
		if (cnt == idx - 1)
		{
			newNode->next = present->next;
			present->next = newNode;
			return (newNode);
		}

		present = present->next;
		cnt++;
	}

	free(newNode);

	return (NULL);
}
