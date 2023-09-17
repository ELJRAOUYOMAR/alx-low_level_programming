#include <stdio.h>

/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
unsigned long a = 1, b = 2, c;
int count = 0;

while (count < 98)
{
if (count == 0)
printf("%lu, %lu, ", a, b);
else if (count != 97)  /* Print the comma and space */
printf("%lu, ", c);
else                  /* Print the last number with a newline */
printf("%lu\n", c);

/* Calculate the next Fibonacci number */
c = a + b;
a = b;
b = c;
count++;
}

return (0);
}
