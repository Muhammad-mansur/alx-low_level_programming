#include "main.h"

/**
  * prime - function to check if a number is prime using recursion
  *
  * @n: The number to be checked
  * @m: The current divisor being tested
  *
  * Return: 1 if the number is prime, otherwise return 0
  */

int _prime(int n, int m)
{
	if (m == 1)
	{
		return (1);
	}

	else if (n % m == 0)
	{
		return (0);
	}

	return (_prime(n, m - 1));
}

/**
  * is_prime_number - function to check if a number is prime or not
  *
  * @n: input
  *
  * Return: 1 if the number is prime, otherwise return 0
  */

int is_prime_number(int n)
{
	int m;

	if (n < 2)
	{
		return (0);
	}

	m = n;

	return (_prime(n, m));
}
