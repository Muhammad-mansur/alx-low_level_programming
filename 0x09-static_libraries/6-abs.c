#include "main.h"

/**
  * _abs - Computes absolute val. of an integer
  *
  * @c: The nuumber to be computed
  *
  * Return: 0 or absolute value of number
  */

int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
