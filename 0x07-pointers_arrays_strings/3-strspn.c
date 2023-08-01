#include "main.h"
#include <stddef.h>

/**
  * _strspn - Function that gets lenght of a prefix string
  *
  * @s: The string to be searched
  * @accept: The prefix to be measured
  *
  * Return: 0
  */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int byte = 0;

	while (*s != '\0')
		{
			for (i = 0; accept[i]; i++)
				{
					if (*s == accept[i])
					{
						byte++;
						break;
					}
					else if (accept[i] == '\0')
					{
						return (byte);
					}
				}
		}
}
