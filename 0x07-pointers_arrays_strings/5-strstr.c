#include "main.h"

/**
  * _strstr - A function that locates a substring
  *
  * @haystack: The string to be searched
  * @needle: --
  *
  * Return: character
  */

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
	{
		return (haystack);
	}

	for (i = 0; haystack[i]; i++)
		if (haystack[i] == needle[i])
		{
			if (needle[i + 1] == '\0')
				return (haystack);
		}
	return ('\0');
}
