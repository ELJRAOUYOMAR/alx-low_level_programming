#include "main.h"


/**
 * function that swaps the values of two integers.
 * @n: A pointer to an integer
 */
void swap_int(int *a, int *b)
{
int c;

c = *a;
*a = *b;
*b = c;
}
