#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the first 98 Fibonacci numbers separated by comma and space.
 * The numbers should be separated by a comma, followed by a space.
 * You are allowed to use the standard library.
 * You are not allowed to use any other library (You can’t use GMP, etc…).
 * You are not allowed to use long long, malloc, pointers, arrays/tables, or structures.
 * You are not allowed to hard code any Fibonacci number (except for 1 and 2).
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    unsigned long long int a = 1, b = 2;
    int count = 2; /* Start with 2 since we already have 1 and 2 */

    printf("%llu, %llu, ", a, b);

    while (count < 98)
    {
        /* Calculate the next Fibonacci number */
        unsigned long long int next = a + b;

        /* Print the number with comma and space */
        printf("%llu, ", next);

        /* Update variables for the next iteration */
        a = b;
        b = next;
        count++;
    }

    printf("\n");

    return (0);
}
