#include <stdio.h>

/**
* main - Entry point
*
* Description: Prints all possible combinations of single-digit numbers.
* Numbers must be separated by ', ' and should be in ascending order.
* You can only use the putchar function and a maximum of four times.
*
* Return: Always 0 (Success)
*/
int main(void)
{
int num;

for (num = 0; num <= 9; num++)
{
putchar(num + '0');

if (num < 9)
{
putchar(',');
putchar(' ');
}
}

putchar('\n');

return (0);
}
