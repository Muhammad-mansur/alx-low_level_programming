#include "main.h"

/**
  * _isalpha - entry point
  *
  * @c: The character to be checked
  *
  * Return: 0 (success)
  */

int _isalpha(int c)
{
	if (c >= 41 && c <= 122)
	{
		return (1);
	}
	return (0);
}
