#include "main.h"


/**
 * strtow - function that splits a string into words.
 * @str: string to be split
 * Return: pointer to an array of strings (words)
 */

char **strtow(char *str)
{
    int num_words = 0, i = 0;
    char **words = NULL, *token = strtok(str, " ");

    if (!str || !*str)
        return (NULL);

    while (token)
    {
        num_words++;
        token = strtok(NULL, " ");
    }

    words = (char **)malloc((num_words + 1) * sizeof(char *));
    if (!words)
        return (NULL);

    token = strtok(str, " ");
    while (token)
    {
        words[i++] = strdup(token);
        if (!words[i - 1])
        {
            while (--i >= 0)
                free(words[i]);
            free(words);
            return (NULL);
        }
        token = strtok(NULL, " ");
    }

    words[i] = NULL;
    return (words);
}
