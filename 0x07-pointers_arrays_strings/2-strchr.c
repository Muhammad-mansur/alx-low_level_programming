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
			/* found the character, return a pointer to it */
			return (s);
		}
	}

	if (*s == c)
	{
		/**
		  *found the character at the null-terminator,
		  * return a pointer to it.
		  */
		return (s);
	}

	/* if character is not found, return NULL */
	return (NULL);
}
