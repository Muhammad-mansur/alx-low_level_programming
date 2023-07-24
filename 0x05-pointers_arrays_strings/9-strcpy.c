#include "main.h"
#include <string.h>

/**
  * _strcpy - string copy function
  *
  * @src: fst charater
  *
  * @dest: second character
  *
  * return: 0
  */

char *_strcpy(char *dest, char *src)
{
	strcpy(src, dest);
	return (dest);
}
