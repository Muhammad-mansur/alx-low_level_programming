#include "main.h"

/**
  * get_endianness - A function that checks the endianness
  * Return: 0 if big endian, 1 if little endian
  */

int get_endianness(void)
{
	unsigned char *b_ptr;
	unsigned int test = 1;

	b_ptr = (unsigned char *)&test;

	if (*b_ptr == 1)
		return (1);
	else
		return (0);
}
