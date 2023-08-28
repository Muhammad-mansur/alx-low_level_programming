#include "lists.h"

/**
  * pop_listint - a function that deletes the
  * head node of a listint_t linked list
  * @head: pointer to a pointer to the head of the list
  * Return: The data of the deleted node or 0 if the list is empty
  */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int da_ta;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}

	tmp = *head;
	da_ta = tmp->n;
	*head = tmp->next;
	free(tmp);

	return (da_ta);
}
