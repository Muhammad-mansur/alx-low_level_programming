#include "main.h"
#include <string.h>

/**
  * reverse_array - function to reverse an array of integers
  *
  * @a: array of integers
  * @n: number of elements in the array
  *
  * Return: nothing
  */

void reverse_array(int *a, int n)
{
	int t;
	int s = 0;
	int e = n - 1;

	for (s = 0, e = n - 1; s < e; s++, e--)
	{
	/* Swap elements at start and end */
		t = a[s];
		a[s] = a[e];
		a[e] = t;
	}
}
