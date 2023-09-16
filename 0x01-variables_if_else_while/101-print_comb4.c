#include <stdio.h>

/**
* main - Entry point
*
* Description: Prints all possible different combinations of three digits.
* Numbers must be separated by ', '.
* The three digits must be different.
* 012, 120, 102, 021, 201, 210 are considered the same combination.
* Print only the smallest combination of three digits.
* Numbers should be printed in ascending order, with three digits.
* You can only use the putchar function and a maximum of six times.
* You are not allowed to use any variable of type char.
*
* Return: Always 0 (Success)
*/
int main(void)
{
int first_digit, second_digit, third_digit;

for (first_digit = 0; first_digit <= 7; first_digit++)
{
for (second_digit = first_digit + 1; second_digit <= 8; second_digit++)
{
for (third_digit = second_digit + 1; third_digit <= 9; third_digit++)
{
putchar(first_digit + '0');
putchar(second_digit + '0');
putchar(third_digit + '0');

if (first_digit < 7 || second_digit < 8 || third_digit < 9)
{
putchar(',');
putchar(' ');
}
}
}
}

putchar('\n');

return (0);
}
