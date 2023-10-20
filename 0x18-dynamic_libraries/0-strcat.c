#include "main.h"
#include <string.h>

/**
  * _strcat - concatenation pointer
  *
  * @dest: first pointer variable
  * @src: second pointer variable
  *
  * Return: character
  */

char *_strcat(char *dest, char *src)
{
	/* Concatenating s1 and s2 */
	strcat(dest, src);
	return (dest);

}
