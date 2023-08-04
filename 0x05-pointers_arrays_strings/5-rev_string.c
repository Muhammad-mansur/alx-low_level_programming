#include "main.h"
#include <string.h>

/**
  * rev_string - A function that reverses a string
  *
  * @s: String pointer
  *
  * Return: void
  */

void rev_string(char *s)
{
	int reverse = strlen(s);
	int i;

	for (i = reverse - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
