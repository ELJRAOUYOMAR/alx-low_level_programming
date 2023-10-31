#include "main.h"
#include <stdlib.h>

/**
 * count_words - Count the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words.
 */
int count_words(char *str)
{
    int count = 0;
    int in_word = 0;

    while (*str)
    {
        if (*str == ' ' || *str == '\t' || *str == '\n')
            in_word = 0;
        else if (in_word == 0)
        {
            in_word = 1;
            count++;
        }
        str++;
    }
    return count;
}

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: A pointer to an array of strings (words), or NULL if it fails.
 */
char **strtow(char *str)
{
    char **words;
    int word_count, i, j, word_length;

    if (str == NULL || *str == '\0')
        return NULL;

    word_count = count_words(str);

    if (word_count == 0)
        return NULL;

    words = (char **)malloc(sizeof(char *) * (word_count + 1));

    if (words == NULL)
        return NULL;

    for (i = 0; i < word_count; i++)
    {
        while (*str == ' ' || *str == '\t' || *str == '\n')
            str++;

        word_length = 0;
        while (str[word_length] != ' ' && str[word_length] != '\t' && str[word_length] != '\n' && str[word_length] != '\0')
            word_length++;

        words[i] = (char *)malloc(word_length + 1);

        if (words[i] == NULL)
        {
            for (j = 0; j < i; j++)
                free(words[j]);
            free(words);
            return NULL;
        }

        for (j = 0; j < word_length; j++)
            words[i][j] = *str++;
        words[i][j] = '\0';
    }

    words[word_count] = NULL;
    return words;
}

