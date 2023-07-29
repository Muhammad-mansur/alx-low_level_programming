#include "main.h"

/**
  * cap_string - function name
  *
  * @str: character pointer
  *
  * Return: character
  */

char *cap_string(char *str)
{
	int a = 0;
	int sepa = 11;
	char sep[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	while (str[a])
	{
		int b = 0;

		while (b < sepa)
		{
			if ((a == 0 || str[a - 1] == sep[b]) && (str[a] >= 97 && str[a] <= 122))
				str[a] -= 32;

			b++;
		}

		a++;
	}

	return (str);
}
