#include "lists.h"

/**
  * free_listint_safe - frees a list
  * @h: pointer to a pointer
  * Return: The size of the list that was freed
  */

size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	size_t cnt = 0;

	if (!h || !*h)
	{
		return (0);
	}

	while (*h)
	{
		cnt++;

		tmp = (*h)->next;
		free(*h);
		*h = tmp;

		if (*h == tmp)
		{
			*h = NULL;
			break;
		}
	}

	return (cnt);
}
