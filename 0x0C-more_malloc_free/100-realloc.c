#include "main.h"

/**
  * _realloc - A function that reallocates a memory block using
  * malloc and free
  *
  * @ptr: is a pointer to the memory previousy allocated
  * @old_size: is the size in bytes of the allocated space
  * @new_size: is the new size in bytes of the new memory block
  *
  * Return: void
  */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == old_size)
	{
		return (ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	free(ptr);

	ptr = malloc(new_size);
	if (ptr == NULL)
	{
		return (NULL);
	}

	return (ptr);
}
