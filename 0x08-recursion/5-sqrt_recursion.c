#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number for which to find the square root.
 *
 * Return: The natural square root of n.
 *         If n does not have a natural square root, return -1.
 */
int _sqrt_recursion(int n)
{
    /* Base case: if n is negative, there is no natural square root */
    if (n < 0)
    {
        return -1;
    }

    /* Base case: if n is 0 or 1, the square root is n itself */
    if (n == 0 || n == 1)
    {
        return n;
    }

    /* Recursive case: Check for the square root in the range [1, n/2] */
    int result = check_square_root(n, 1);
    return result;
}

/**
 * check_square_root - A recursive function to perform binary search for the square root.
 * @n: The number for which to find the square root.
 * @i: The current search value.
 *
 * Return: The natural square root of n.
 *         If n does not have a natural square root, return -1.
 */
int check_square_root(int n, int i)
{
    if (i * i == n)
    {
        return i;  /* Found the square root */
    }
    else if (i * i > n)
    {
        return -1;  /* Square root cannot be found in the remaining range */
    }

    /* Recursive case: continue the search */
    return check_square_root(n, i + 1);
}

