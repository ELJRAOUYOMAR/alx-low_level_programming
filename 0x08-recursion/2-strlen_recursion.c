#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);  /* Base case: end of string reached */
	}

	/* Recursively call the function with the next character */
	return (1 + _strlen_recursion(s + 1));
}


