#include "main.h"

/**
 * _puts_recursion - Prints a string, followed by a new line.
 * @s: The string to be printed.
 *
 * Description: Prints each character of the string @s recursively until
 * the end of the string is reached, then prints a new line.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		/* Print a new line when the end of the string is reached */
		_putchar('\n');
		return;
	}

	/* Print the current character */
	_putchar(*s);

	/* Recursively call the function with the next character */
	_puts_recursion(s + 1);
}
