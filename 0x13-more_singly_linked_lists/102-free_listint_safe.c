#include "lists.h"

/**
  * free_listint_safe - frees a list
  * @h: pointer to a pointer
  * Return: The size of the list that was freed
  */

size_t free_listint_safe(listint_t **h)
{
	listint_t *present, *tmp;
	size_t cnt = 0;

	if (h == NULL || *h == NULL)
	{
		return (0);
	}

	present = *h;

	while (present)
	{
		tmp = present->next;
		free(present);
		present = tmp;
		cnt++;
		if (present == *h)
		{
			*h = NULL;
			break;
		}
	}

	return (cnt);
}
