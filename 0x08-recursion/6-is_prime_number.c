#include "main.h"

/**
  * is_prime_number - function to check if a number is prime or not
  *
  * @n: input
  *
  * Return: 0
  */

int prime(int n, int m);

int prime(int n, int m)
{
	int m;

	if (n < 2)
	{
		return (0);
	}

	else if (m == 1)
	{
		return (1);
	}

	else if (n % m == 0)
	{
		return (0);
	}

	return prime(n, m - 1);
}

int prime_number(int n)
{
	return prime(n);
}
