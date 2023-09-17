#include <stdio.h>

/**
* main - Entry point for the Fibonacci program.
*
* Return: Always 0.
*/
int main(void)
{
int n1 = 1, n2 = 2, next, sum = 0;

while (n2 <= 4000000)
{
if (n2 % 2 == 0)
{
sum += n2;  // Add even-valued term to the sum
}

// Calculate the next Fibonacci term
next = n1 + n2;
n1 = n2;
n2 = next;
}

printf("The sum of even-valued terms in the Fibonacci sequence that do not exceed 4,000,000 is: %d\n", sum);

return (0);
}

