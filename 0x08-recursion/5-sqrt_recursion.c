#include "main.h"

/**
  * _pow_recursion - function that returns the natural square
  * root of a number.
  *
  * @n: number
  *
  * Return: 0
  */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (n * n +_sqrt_recursion(n + 1));
}
