#include "main.h"

/**
 * helper - a helper function to check for prime numbers
 * @n: the number to check
 * @i: the current divisor
 * Return: 1 if n is prime, 0 otherwise
 */
int helper(int n, int i)
{
	/* base case: if i is equal to n, return 1 */
	if (i == n)
		return (1);
	/* base case: if n is divisible by i, return 0 */
	if (n % i == 0)
		return (0);
	/* recursive case: increment i and try again */
	return (helper(n, i + 1));
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: the number to check
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	/* edge case: if n is less than 2, return 0 */
	if (n < 2)
		return (0);
	/* call the helper function with an initial divisor of 2 */
	return (helper(n, 2));
}


