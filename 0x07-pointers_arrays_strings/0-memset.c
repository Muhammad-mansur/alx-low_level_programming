#include "main.h"
#include <string.h>

/**
  * _memset - function to fill memory with constant byte
  *
  * @s: A pointer to the memory block to be filled
  * @b: The constant byte to be set
  * @n: The number of bytes to be set to the value
  *
  * Return: character
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
