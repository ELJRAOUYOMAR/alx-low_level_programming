#include <stdio.h>

/**
* main - Entry point for the Fibonacci program.
*
* Return: Always 0.
*/
int main(void)
{
int count, n1 = 1, n2 = 2, next;

printf("%d, %d, ", n1, n2);  // Print the first two Fibonacci numbers

for (count = 2; count < 98; count++)
{
next = n1 + n2;
if (next > 0)
{
if (count < 97)
printf("%d, ", next);  // Print intermediate positive Fibonacci numbers
else
printf("%d\n", next);  // Print the last positive Fibonacci number with a newline
}
n1 = n2;
n2 = next;
}

return (0);
}

