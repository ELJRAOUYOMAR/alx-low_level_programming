#include <stdio.h>

/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
unsigned long long a = 1, b = 2, c;
int count = 0;

while (count < 98)
{
if (count == 0)
printf("%llu, %llu, ", a, b);
else if (count != 97)  /* Print the comma and space */
printf("%llu, ", c);
else                  /* Print the last number with a newline */
printf("%llu\n", c);

/* Calculate the next Fibonacci number */
c = a + b;
a = b;
b = c;
count++;
}

return (0);
}
