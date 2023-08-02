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
	if (n % 2 != 0 && 2 % n != 0)
	{
		return (1);
	}

	return (0);
}
