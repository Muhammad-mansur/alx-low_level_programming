#include "main.h"

/**
  * print_rev - function to print a string in reverse
  *
  * @s: string pointer
  *
  * Return: void
  */

void print_rev(char *s)
{
	for (s = 'z'; s >= 'a'; s--)
	{
		_putchar(*s);
	}
}
