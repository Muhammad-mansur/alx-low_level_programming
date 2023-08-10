#include "main.h"

/**
  * str_concat - string concatenation function
  *
  * @s1: first string
  * @s2: second string
  *
  * Return: 0
  */

char *str_concat(char *s1, char *s2)
{
	int a, b;
	int L1 = 0, L2 = 0;
	char *m;

	/* HANDLING NULL strings */
	if (s1 == NULL)
	{
		s2 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	/* calculate the lengths of the strings */
	L1 = strlen(s1);
	L2 = strlen(s2);

	/* Allocate memory for the concatenated string */
	m = (char *)malloc((L1 + L2 + 1) * sizeof(char));
	if (m == NULL)
	{
		return (NULL);
	}

	/* copy the content of s1 and s2 into m */
	for (a = 0; a < L1; a++)
	{
		m[a] = s1[a];
	}

	a = 0;
	for (b = 0; b < L2; b++)
	{
		m[a + b] = s2[b];
	}

	/* Null termination of the concatenated string */

	m[L1 + L2] = '\0';

	return (m);
}
