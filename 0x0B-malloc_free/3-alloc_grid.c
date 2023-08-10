#include "main.h"

/**
  * alloc_grid - function
  *
  * @width: ---
  * @height: ---
  *
  * Return: 0
  */

int **alloc_grid(int width, int height)
{
	int a, b;
	int **p;

	if (width || height <= 0)
	{
		return (NULL);
	}

	p = (int **)malloc(height * sizeof(int *));
	if (p == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < height; a++)
	{
		p[a] = (int *)malloc(width * sizeof(int));
		if (p[a] == NULL)
		{
			for (b = 0; b < a; b++)
			{
				free(p[b]);
			}
			free(p);
			return NULL;
		}
		for (b = 0; b < width; b++)
		{
			p[a][b] = 0;
		}
	}
	return (p);
}
