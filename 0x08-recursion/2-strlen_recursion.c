#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string for which to find the length.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
    /* Base case: end of string reached */
    if (*s == '\0')
    {
        return 0;
    }

    /* Recursively call the function with the next character and add 1 to the result */
    return 1 + _strlen_recursion(s + 1);
}
