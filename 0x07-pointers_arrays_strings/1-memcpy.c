#include "main.h"
#include <string.h>

/**
  * _memcpy - function that copies memory area
  *
  * @dest: memory area 2
  * @src: memory area 1
  * @n: number of bytes
  *
  * Return: character
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}

	return (dest);
}
