#include "main.h"

/**
  */

void *malloc_checked(unsigned int b)
{
	(void) b;
	int *c;

	c = (int *)malloc(sizeof(int));

	if (c == NULL)
	{
		exit(98);
	}

	return (c);
}
