#include "main.h"

/**
  * _isdigit - Function name
  *
  * @c: integer
  *
  * Return: 0
  */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
