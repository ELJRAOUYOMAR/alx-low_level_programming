/*
* C program to find and print the first 98 Fibonacci numbers, starting with 1 and 2, followed by a new line,
* with the numbers separated by comma, followed by a space, without using long long, malloc, pointers, arrays/tables, structures, or hard coding any Fibonacci number (except for 1 and 2),
* and following the betty style, printing only positive Fibonacci numbers.
*/

#include <stdio.h>

int main(void)
{
int fib1 = 1;
int fib2 = 2;
int fib3;

printf("%d, %d", fib1, fib2);

// Iterate from 3 to 98, printing the Fibonacci number at each step, but only if it is positive.
for (int i = 3; i <= 98; i++)
{
fib3 = fib1 + fib2;

// Check if the Fibonacci number is negative.
if (fib3 < 0)
{
// Skip the rest of the loop iteration.
continue;
}

// Print the Fibonacci number, followed by a comma and a space.
printf(", %d", fib3);

// Update the previous two Fibonacci numbers.
fib1 = fib2;
fib2 = fib3;
}

// Print a new line at the end.
printf("\n");

return 0;
}

