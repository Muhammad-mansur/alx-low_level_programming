#include "main.h"

/**
  * _isupper - function to check if it is upper or not
  *
  * @c: integer variable
  *
  * Return: 0
  */

int _isupper(int c)
{
	if (c == 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
