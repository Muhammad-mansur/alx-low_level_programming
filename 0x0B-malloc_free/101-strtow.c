#include "main.h"


/**
 * strtow - function that splits a string into words.
 * @str: string to be split
 * Return: pointer to an array of strings (words)
 */

char **strtow(char *str)
{
	char **array, *tmp;
	int a, b = 0, len = 0, num_words, word_len = 0, start, end;

	while (str[len] != '\0')
	{
		len++;
	}
	num_words = c_words(str);
	if (num_words == 0)
		return (NULL);

	array = (char **)malloc(sizeof(char *) * (num_words + 1));
	if (array == NULL)
		return (NULL);

	for (a = 0; a <= len; a++)
	{
		if (str[a] == ' ' || str[a] == '\0')
		{
			if (word_len)
			{
				end = a;
				tmp = (char *)malloc(sizeof(char) * (word_len + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				array[b] = tmp - word_len;
				b++;
				word_len = 0;
			}
		}
		else if (word_len++ == 0)
			start = a;
	}
	array[b] = NULL;
	return (array);
}

/**
  * c_words - helper function to count the number of words in a string
  * @st: the input string
  * Return: no of words in the string
  */

int c_words(char *st)
{
	int is_word = 0, word_count = 0, a;

	for (a = 0; st[a] != '\0'; a++)
	{
		if (st[a] == ' ')
		{
			is_word = 0;
		}
		else if (is_word == 0)
		{
			is_word = 1;
			word_count++;
		}
	}

	return (word_count);
}
