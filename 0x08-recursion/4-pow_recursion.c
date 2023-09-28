#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y.
 * @x: The base.
 * @y: The exponent.
 *
 * Return: The result of x raised to the power of y.
 *         If y is lower than 0, return -1.
 */
int _pow_recursion(int x, int y)
{
    /* Base case: If y is negative, return -1 */
    if (y < 0)
    {
        return -1;
    }

    /* Base case: If exponent is 0, return 1 */
    if (y == 0)
    {
        return 1;
    }

    /* Recursive case: Multiply x by x raised to the power of y-1 */
    return x * _pow_recursion(x, y - 1);
}

