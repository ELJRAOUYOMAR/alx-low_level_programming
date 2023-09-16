#include <stdio.h>

/**
* main - Entry point
*
* Description: Prints all possible combinations of two two-digit numbers.
* Numbers should range from 0 to 99.
* The two numbers should be separated by a space and printed with two digits.
* The combinations of numbers must be separated by a comma, followed by a space.
* Combinations should be printed in ascending order.
* 00 01 and 01 00 are considered the same combination of numbers.
* You can only use the putchar function and a maximum of eight times.
* You are not allowed to use any variable of type char.
*
* Return: Always 0 (Success)
*/
int main(void)
{
int tens1, ones1, tens2, ones2;

for (tens1 = 0; tens1 <= 9; tens1++)
{
for (ones1 = 0; ones1 <= 9; ones1++)
{
for (tens2 = tens1; tens2 <= 9; tens2++)
{
for (ones2 = (tens1 == tens2) ? ones1 + 1 : 0; ones2 <= 9; ones2++)
{
putchar(tens1 + '0');
putchar(ones1 + '0');
putchar(' ');
putchar(tens2 + '0');
putchar(ones2 + '0');

if (!(tens1 == 9 && ones1 == 9 && tens2 == 9 && ones2 == 9))
{
putchar(',');
putchar(' ');
}
}
}
}
}

putchar('\n');

return (0);
}
