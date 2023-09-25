#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: Pointer to the square matrix
 * @size: Size of the matrix (number of rows or columns)
 */
void print_diagsums(int *a, int size)
{
    int i, diag1_sum = 0, diag2_sum = 0;

    /* Calculate the sum of the main diagonal (top-left to bottom-right) */
    for (i = 0; i < size; i++)
    {
        diag1_sum += a[i * size + i];
    }

    /* Calculate the sum of the secondary diagonal (top-right to bottom-left) */
    for (i = 0; i < size; i++)
    {
        diag2_sum += a[i * size + (size - 1 - i)];
    }

    /* Print the sums */
    printf("%d, %d\n", diag1_sum, diag2_sum);
}

