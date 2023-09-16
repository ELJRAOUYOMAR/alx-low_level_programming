#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point, generates and classifies a random number
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;

/* Initialize random number generator */
srand(time(0));

/* Generate a random number between INT_MIN and INT_MAX */
n = rand() - RAND_MAX / 2;

/* Check if n is positive, negative, or zero, and print the result */
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n < 0)
{
printf("%d is negative\n", n);
}
else
{
printf("%d is zero\n", n);
}

return (0);
}
