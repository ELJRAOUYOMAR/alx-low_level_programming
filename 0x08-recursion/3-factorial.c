#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 * @n: The number for which to calculate the factorial.
 *
 * Return: The factorial of the number. If n is lower than 0, return -1 (error).
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);  /* Error: n is lower than 0 */
	}

	if (n == 0 || n == 1)
	{
		return (1);  /* Base case: factorial of 0 and 1 is 1 */
	}

	return (n * factorial(n - 1));  /* Recursive call for the factorial of n */
}

