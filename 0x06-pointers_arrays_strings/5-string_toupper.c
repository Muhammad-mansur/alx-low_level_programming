#include "main.h"

/**
  * string_toupper - function name
  *
  * @str: string to change
  *
  * Return: character
  */

char *string_toupper(char *str)
{
	char *ptr = str;

	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str -= 'a' - 'A';
		}
		str++;
	}
	return (ptr);
}
