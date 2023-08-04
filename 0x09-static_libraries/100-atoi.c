#include "main.h"

/**
 * _atoi - A function that converts a string to an integer
 * @s: The string to convert
 *
 * Return: 0
 */


int _atoi(char *s)
{
	int a = 0;
	unsigned int n = 0;
	int min = 1;
	int ab = 0;

	while (s[a])
	{
		if (s[a] == 45)
		{
			min *= -1;
		}

		while (s[a] >= 48 && s[a] <= 57)
		{
			ab = 1;
			n = (n * 10) + (s[a] - '0');
			a++;
		}

		if (ab == 1)
		{
			break;
		}

		a++;
	}

	n *= min;
	return (n);
}
