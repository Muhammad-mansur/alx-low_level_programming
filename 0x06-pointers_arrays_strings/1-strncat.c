#include "main.h"
#include <string.h>

/**
  * _strncat - function name
  *
  * @dest: first pointer
  * @src: second pointer
  * @n: variable
  *
  * Return: character
  */

char *_strncat(char *dest, char *src, int n)
{
	if (src < n)
	{
		_putchar('\0');
	}

	strncat(dest, src);

	return (dest);
}
