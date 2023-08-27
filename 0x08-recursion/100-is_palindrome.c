#include "main.h"

/**
  * is_palindrome - function to check for palindrome
  * @s: string to be checked
  * Return: return 1 if palindrome, otherwise return 0
  */

int is_palindrome(char *s)
{
	int strt = 0;
	int len = strlen(s);
	int end = len - 1;

	while (strt < end)
	{
		if (s[strt] != s[end])
		{
			return (0);
		}
		strt++;
		end--;
	}

	return (1);
}
