#include "main.h"

/**
  */

int *array_range(int min, int max)
{
	int *arr = NULL;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	arr = (int *)malloc((min + max + 1) * sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < min; i++)
	{
		arr[i] = min;
	}
	return (arr);
}
