#include "main.h"

/**
  * flip_bits - A function that returns number of flipped bits
  * @n: integer
  * @m: integer
  * Return: number of bits
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int cnt = 0;
	unsigned long int rlt = n ^ m;

	while (rlt)
	{
		cnt = cnt + (rlt & 1);
		rlt >>= 1;
	}

	return (cnt);
}
