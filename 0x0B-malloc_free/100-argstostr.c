#include "main.h"

/**
  * argstostr - A function that concatenates all arguments
  * @ac: --
  * @av: --
  * Return: returns a pointer to a new string or NULL if it fails
  */

char *argstostr(int ac, char **av)
{
	int t_length = 0, a, c_index, arg_len;
	char *rlt;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	/* Calculate total length of concat string */
	for (a = 0; a < ac; a++)
	{
		if (av[a] != NULL)
		{
			t_length += strlen(av[a]) + 1;
		}
	}

	/* Allocate memory for the new concat string */
	rlt = (char *)malloc(t_length + 1);
	if (rlt == NULL)
	{
		return (NULL);
	}

	/* concat all arguments and newline characters */
	for (a = 0; a < ac; a++)
	{
		if (av[a] != NULL)
		{
			arg_len = strlen(av[a]);
			strcpy(rlt + c_index, av[a]);
			c_index += strlen(av[a]);
			rlt[c_index] = '\n';
			c_index++;
		}
	}

	/* Null terminate the concat strng */
	rlt[c_index] = '\0';

	return (rlt);
}
