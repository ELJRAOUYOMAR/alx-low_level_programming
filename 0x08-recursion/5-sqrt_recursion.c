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
    int i;  
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

    
    /* Check for the square root in the range [1, n/2] using recursion */
    for (i = 1; i <= n / 2; i++)
    {
        if (i * i == n)
        {
            return i;  /* Found the square root */
        }
        else if (i * i > n)
        {
            break;  /* Square root cannot be found in the remaining range */
        }
    }

    return -1;  /* No natural square root found */
}

