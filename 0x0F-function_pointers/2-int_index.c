#include "function_pointers.h"

/**
  * int_index - function that searches for an integer
  * @array: array
  * @size: number of elements in array
  * @cmp: function pointer used to compare values
  * Return: 0
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}

	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]))
		{
			return (a);
		}
	}
	return (-1);
}
