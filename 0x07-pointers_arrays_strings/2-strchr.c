#include "main.h"
#include <stddef.h>
/**
  * _strchr - Function that locates a character in a string
  *
  * @s: string
  * @c: character
  *
  * Return: character
  */

char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}

	return (NULL);
}
