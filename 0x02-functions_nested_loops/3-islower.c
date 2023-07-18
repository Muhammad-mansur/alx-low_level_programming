#include "main.h"

/**
  * _islower - entry point
  *
  *@c: The character to be checked
  *
  * Description: A program that checks for lowercase character
  *
  * Return: 0 (succes)
  */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}	
	return (0);
}
