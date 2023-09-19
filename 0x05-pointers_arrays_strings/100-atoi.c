#include "main.h"

/**
* _atoi - Converts a string to an integer.
* @s: The string to convert.
*
* Return: The integer value of the converted string.
*/
int _atoi(char *s)
{
int result = 0;
int sign = 1;
int i = 0;

/* Handle leading '+' or '-' signs */
while (s[i] == '-' || s[i] == '+')
{
if (s[i] == '-')
sign *= -1;
i++;
}

/* Iterate through the string to convert digits to an integer */
while (s[i] >= '0' && s[i] <= '9')
{
result = result * 10 + (s[i] - '0');
i++;
}

return result * sign;
}

