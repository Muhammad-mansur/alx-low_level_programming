#include "function_pointers.h"

/**
  * array_iterator - function name
  * @array: array
  * @size: size of the array
  * @action: ---
  * Return: nothing
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	/* Check if action and array are valid */
	if (action == NULL || array == NULL)
	{
		exit(98);
	}

	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}
