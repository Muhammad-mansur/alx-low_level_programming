#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
  * create_array - function that creates an array of chars
  * and initializes it with a specific char
  *
  * @size: integer size
  * @c: array of characters
  *
  * Return: 0
  */

char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}

	array = (char *)malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < size; a++)
	{
		array[a] = c;
	}

	return (array);
}
