#include "lists.h"

/**
  * free_listint_safe - frees a list
  * @h: pointer to a pointer
  * Return: The size of the list that was freed
  */

size_t free_listint_safe(listint_t **h)
{
	listint_t *next, *present;
	size_t cnt = 0;

	if (!h || !(*h))
		return (0);

	present = *h;

	while (present)
	{
		next = present->next;
		free(present);
		cnt++;

		if (next >= present)
		{
			*h = NULL;
			break;
		}
		present = next;
	}

	*h = NULL;

	return (cnt);
}
