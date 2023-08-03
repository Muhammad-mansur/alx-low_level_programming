#include "main.h"

/**
  * _check - function that checks the natural square
  * root of a number.
  *
  * @x: number
  * @n: number 2
  *
  * Return: 0
  */

int _check(int n, int x)
{
	if (x * x > n)
		return (-1);

	if (x * x == n)
		return (x);

	return (_check(n, x + 1));
}

/**
  * _sqrt_recursion - function that returns the natural square root
  * of a number.
  * @n: number
  *
  * Return: 0 (success)
  */
int _sqrt_recursion(int n)
{
	int x = 1;

	if (n < 0)
	{
		return (-1);
	}

	return (_check(n, x));
}
