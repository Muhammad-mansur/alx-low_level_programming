#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
  * _create_array - function that creates an array of chars
  *
  * and initializes it with a specific char
  * @size: integer size
  * @char: array of characters
  *
  * Return: 0
  */

char *create_array(unsigned int size, char c)
{
	(void) c;

	char* newA = (char*)malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}

	else
	{
		return (newA);
	}

	return (0);
}
