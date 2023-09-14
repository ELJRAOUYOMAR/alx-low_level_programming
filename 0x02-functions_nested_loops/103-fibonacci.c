#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
long int sum = 0;
long int prev = 1;
long int current = 2;

while (current <= 4000000)
{
if (current % 2 == 0)
{
sum += current;
}

long int next = prev + current;
prev = current;
current = next;
}

printf("%ld\n", sum);

return (0);
}
