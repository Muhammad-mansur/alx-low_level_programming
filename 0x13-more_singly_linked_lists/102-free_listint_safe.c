#include "lists.h"

/**
  * free_listint_safe - frees a list
  * @h: pointer to a pointer
  * Return: The size of the list that was freed
  */

size_t free_listint_safe(listint_t **h)
{
	listint_t *present, *next;
	size_t cnt = 0;

	if (h == NULL || *h == NULL)
	{
		return (0);
	}

	present = *h;

	while (present)
	{
		next = present->next;
		free(present);
		present =next;
		cnt++;
	}

	*h = NULL;

	return (cnt);
}
