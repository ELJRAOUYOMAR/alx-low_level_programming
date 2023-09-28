#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: The string to be printed in reverse.
 *
 * Description: Prints each character of the string @s in reverse order
 * using recursion.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;  /* Base case: end of string reached */
	}

	/* Recursively call the function with the next character */
	_print_rev_recursion(s + 1);

	/* Print the current character after the recursive call */
	_putchar(*s);
}

