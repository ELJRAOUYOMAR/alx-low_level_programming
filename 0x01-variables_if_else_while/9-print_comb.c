#include <stdio.h>

/**
* main - Entry point, prints all single digit numbers of base 10.
*
* Return: Always 0 (Success)
*/
int main(void)
{
int n = 0;

while (n <= 9)
{
putchar(n + '0');
if (n!=9) // Add the comma and space only if it's not the last digit
{
putchar(',');
putchar(' ');
   
}
n++;
}

putchar('\n');

return (0);
}
