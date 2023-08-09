#include "main.h"

/**
 */

char *_strdup(char *str)
{
	unsigned int size = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	char *strr = str;

	strr = (char *)malloc(size * sizeof(char));

	if (strr == NULL)
	{
		return (NULL);
	}

	return (strr);
}
