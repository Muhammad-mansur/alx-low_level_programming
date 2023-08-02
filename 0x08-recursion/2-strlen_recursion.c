#include "main.h"
#include <string.h>

/**
  */

int _strlen_recursion(char *s)
{
	int length;

	length = strlen(s);

	_strlen_recursion(s + 1);

	return(length);
}
