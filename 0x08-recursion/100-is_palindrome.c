#include "main.h"

/**
  * check_is_palindrome - palindrome hlper function
  * @s: string to be checked
  * @first: start
  * @second: end
  * Return: 0
  */

int check_is_palindrome(char *s, int first, int second)
{
	if (first >= second)
		return (1);

	if (s[first] != s[second])
		return (0);

	return (check_is_palindrome(s, first + 1, second - 1));
}

/**
  * is_palindrome - function to check for palindrome
  * @s: string to be checked
  * Return: return 1 if palindrome, otherwise return 0
  */

int is_palindrome(char *s)
{
	int L = strlen(s);

	return (check_is_palindrome(s, 0, L - 1));
}
