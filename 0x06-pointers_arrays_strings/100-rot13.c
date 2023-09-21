#include "main.h"

/**
* rot13 - Encodes a string using ROT13.
* @str: The input string to be encoded.
*
* Return: Pointer to the modified string.
*/
char *rot13(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
{
if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
{
if ((str[i] >= 'A' && str[i] <= 'M') || (str[i] >= 'a' && str[i] <= 'm'))
{
str[i] += 13;
}
else
{
str[i] -= 13;
}
}
}

return str;
}

