#include "main.h"

/**
  * is_prime_number - function to check if a number is prime or not
  *
  * @n: input
  *
  * Return: 0
  */

int is_prime_number(int n)
{
	int i = 0;

	if (n < 2)
	{
		return (0);
	}

	else if (i == 1)
	{
		return (1);
	}

	else if (n % i == 0)
	{
		return (0);
	}

	return is_prime_number(n, i - 1);
}
