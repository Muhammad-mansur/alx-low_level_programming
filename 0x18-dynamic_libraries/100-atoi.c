#include <limits.h>

/**
  * _atoi - converts a string to an integer
  *
  * @s: string to be converted
  *
  * Return: 0
  */

int _atoi(char *s)
{
	int rlt = 0;
	int sign = 1;

	while (*s == ' ' || (*s >= 9 && *s <= 13))
		s++;

	if (*s == '-')
	{
		sign = -1;
		s++;
	}

	else if (*s == '+')
		s++;

	if (*s < '0' || *s > '9')
		return (0);

	while (*s >= '0' && *s <= '9')
	{
		int dgt = *s - '0';

		if (rlt > (INT_MAX - dgt) / 10)
		{
			if (sign == 1)
				return (INT_MAX);
			else
				return (INT_MIN);
		}

		rlt = rlt * 10 + dgt;
		s++;
	}

	return rlt * sign;
}
