#include "main.h"

/**
  * _calloc - ---
  *
  * @nmemb: ---
  * @size: ---
  *
  * Return: void
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr = NULL;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	/* Allocate memory */
	arr = malloc(nmemb * size);
	if (arr == NULL)
	{
		return (NULL);
	}

	memset(arr, 0, nmemb * size);
	return (arr);
}
