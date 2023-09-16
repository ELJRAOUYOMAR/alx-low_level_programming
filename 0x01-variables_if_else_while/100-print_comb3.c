#include <stdio.h>

/**
* main - Entry point
*
* Description: Prints all possible different combinations of two digits.
* Numbers must be separated by ', '.
* The two digits must be different.
* 01 and 10 are considered the same combination.
* Print only the smallest combination of two digits.
* Numbers should be printed in ascending order, with two digits.
* You can only use the putchar function and a maximum of five times.
* You are not allowed to use any variable of type char.
*
* Return: Always 0 (Success)
*/
int main(void)
{
int first_digit, second_digit;

for (first_digit = 0; first_digit <= 8; first_digit++)
{
for (second_digit = first_digit + 1; second_digit <= 9; second_digit++)
{
putchar(first_digit + '0');
putchar(second_digit + '0');

if (first_digit < 8 || second_digit < 9)
{
putchar(',');
putchar(' ');
}
}
}

putchar('\n');

return (0);
}
