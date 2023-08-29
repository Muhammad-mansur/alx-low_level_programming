#include "lists.h"

/**
  * delete_nodeint_at_index - A function that deletes the node at
  * index of a linked list
  *
  * @head: pointer to the address of the head of the list
  * @index: index to delete
  *
  * Return: 1 if it succeeds or -1 if it fails
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int cnt = 0;
	listint_t *present, *tmp;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	present = *head;

	if (index == 0)
	{
		*head = present->next;
		free(present);
		return (1);
	}

	while (present)
	{
		if (cnt == index - 1)
		{
			if (present->next == NULL)
			{
				return (-1);
			}

			tmp = present->next;
			present->next = tmp->next;
			free(tmp);
			return (1);
		}

		present = present->next;
		cnt++;
	}

	return (-1);
}
