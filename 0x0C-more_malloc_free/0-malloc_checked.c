#include "main.h"

/**
  * malloc_checked - A function that allocates memory using malloc
  *
  * @b: allocated memory
  *
  * Return: void
  */

void *malloc_checked(unsigned int b)
{
	void *c;

	c = malloc(b);

	if (c == NULL)
	{
		exit(98);
	}

	return (c);
}
