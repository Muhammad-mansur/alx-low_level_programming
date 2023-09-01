#include "main.h"

/**
  * binary_to_unit - converts a binary number to an unsigned int
  * @b: pointer
  * Return: the converted number or 0
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int converted = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		converted = (converted << 1) | (*b - '0');
		b++;
	}

	return (converted);
}
