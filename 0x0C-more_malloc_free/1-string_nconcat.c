#include "main.h"

/**
  * string_nconcat - A function that concatenates two strings
  *
  * @s1: first string to be concatenated
  * @s2: second string to be concatenated
  * @n: number of characters from the second string
  * s2 that will be concatenated
  *
  * Return: character
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *conc = NULL;
	unsigned int len1 = 0, len2 = 0, i;

	/* Handle NULL strings */
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	/* calculate the length of the strings */
	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
	{
		n = len2;
	}

	/* Memory allocation */
	conc = (char *)malloc((len1 + len2 + 1) * sizeof(char));

	if (conc == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		conc[i] = s1[i];
	}
	for (i = 0; i < n; i++)
	{
		conc[len1 + i] = s2[i];
	}
	conc[len1 + n] = '\0';
	return (conc);
}
