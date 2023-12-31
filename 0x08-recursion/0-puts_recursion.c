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
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
