#include "main.h"
#include "_putchar.c"

/**
 * _strchr - Locates a character in a string.
 * @s: Pointer to the string to search in
 * @c: The character to locate
 *
 * Return: A pointer to the first occurrence of the character c in the string s,
 *         or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
    int i;

    /* Iterate through the string */
    for (i = 0; s[i] >= '\0'; i++)
    {
        /* Check if the current character matches the target character */
        if (s[i] == c)
        {
            /* Return a pointer to the first occurrence of the character */
            return (s + i);
        }
    }

    /* If the character is not found, return NULL */
    return ('\0');
}

