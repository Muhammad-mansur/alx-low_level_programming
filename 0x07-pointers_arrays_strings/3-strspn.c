#include "main.h"
#include <stddef.h>

/**
  * _strspn - Function that gets lenght of a prefix string
  *
  * @s: ---
  * @accept: ---
  *
  * Return: 0
  */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a;

	for (a = 0; a < accept; a++)
	{
		if (*s != '\0' && accept != NULL)
		{
			return (a);
		}
	}
}
