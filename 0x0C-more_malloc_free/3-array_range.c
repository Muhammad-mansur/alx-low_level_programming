#include "main.h"

/**
  * array_range - ---
  * @min: ---
  * @max: ---
  * Return: 0
  */

int *array_range(int min, int max)
{
	int *arr = NULL;
	int i, range;

	if (min > max)
	{
		return (NULL);
	}

	range = max - min + 1;

	arr = (int *)malloc((range) * sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < range; i++)
	{
		arr[i] = min + 1;
	}
	return (arr);
}
