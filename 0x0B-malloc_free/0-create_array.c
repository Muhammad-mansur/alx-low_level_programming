#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
  * _create_array - function that creates an array of chars
  * and initializes it with a specific char
  *
  * @size: integer size
  * @char: array of characters
  *
  * Return: 0
  */

char *create_array(unsigned int size, char c)
{
	char *array = (char*)malloc(size * sizeof(char));

	for (int a = 0; a < size; a++)
	{
		array[a] = c;
	}

	if (size == 0)
	{
		return (NULL);
	}

	if (size == NULL)
	{
		return (NULL);
	}

	return array;
}
