#include "main.h"

/**
 * _sqrt_recursion - Calculates the natural square root of a number
 * @n: The number to find the square root of
 *
 * Return: The natural square root of the number, or -1 if not found
 */
int _sqrt_recursion(int n)
{
    return find_sqrt(n, 1);
}

/**
 * find_sqrt - Recursive helper function to find the square root
 * @n: The number to find the square root of
 * @i: The current guess for the square root
 *
 * Return: The natural square root of the number, or -1 if not found
 */
int find_sqrt(int n, int i)
{
    if (i * i == n)
        return i;
    else if (i * i > n)
        return -1;
    else
        return find_sqrt(n, i + 1);
}

