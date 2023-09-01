#include "main.h"

/**
  * set_bit - sets the value of a bit to 1 at a given index
  * @n: ---
  * @index: ---
  * Return: 1 if it worked or -1 if an error occurred
  */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	m = 1;
	m <<= index;

	*n |= m;

	return (1);
}
