#include "main.h"

/**
  * _puts_recursion - Function to print a string in recursion
  *
  * @s: var pointer
  *
  * Return: nothing
  */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
	}
	else
	{
		_putchar('\n');
	}
	_puts_recursion(s + 1);
}
