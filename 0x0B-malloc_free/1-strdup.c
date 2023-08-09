#include "main.h"

/**
  * _strdup - string duplicate function
  *
  * @str: str to duplicate
  *
  * Return: character
  */

char *_strdup(char *str)
{
	char *strr;
	unsigned int size = 0;
	unsigned int i;

	if (str == NULL)
	{
		return (NULL);
	}

	/* calculate the length of the input string */
	size = strlen(str);

	/* Allocate memory for the duplicate string */
	/* and add 1 for the null terminator */
	strr = (char *)malloc((size + 1) * sizeof(char));

	if (strr == NULL)
	{
		return (NULL);
	}

	/**
	  * copy the characters from the input string to the
	  * duplicate string
	  */
	for (i = 0; i <= size; i++)
	{
		strr[i] = str[i];
	}

	return (strr);
}
