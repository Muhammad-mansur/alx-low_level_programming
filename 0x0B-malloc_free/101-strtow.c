#include "main.h"

/**
  * strtow - function that splits a string into words.
  * @str: string to be split
  * Return: NULL
  */

char **strtow(char *str)
{
	int n_words, a, b;
	char *tok;
	char **array;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}
	/* count no of words */
	n_words = 0;
	tok = strtok(str, " ");
	while (tok != NULL)
	{
		n_words++;
		tok = strtok(NULL, " ");
	}
	/* Memory allocation for the array of strings */
	array = (char **)malloc((n_words + 1) * sizeof(char *));
	if (array == NULL)
	{
		return (NULL);
	}
	/* Split string into words and copy them */
	tok = strtok(str, " ");
	a = 0;
	while (tok != NULL)
	{
		array[a] = strdup(tok);
		if (array[a] == NULL)
		{
			for (b = 0; b < a; b++)
			{
				free(array[b]);
			}
			free(array);
			return (NULL);
		}
		a++;
		tok = strtok(NULL, " ");
	}
	array[n_words] = NULL;
	return (array);
}

/**
  * free_array - funcion to fee memory allocated for array
  * @array: array
  * Return: Nothing
  */

void free_array(char **array)
{
	int a;

	if (array == NULL)
	{
		return;
	}

	for (a = 0; array[a] != NULL; a++)
	{
		free(array[a]);
	}
	free(array);
}
