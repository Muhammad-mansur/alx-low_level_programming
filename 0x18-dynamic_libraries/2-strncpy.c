#include "main.h"
#include <string.h>

/**
  * _strncpy - function name
  *
  * @dest: destination pointer var
  * @src: source pointer var
  * @n: variable
  *
  * Return: character
  */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
