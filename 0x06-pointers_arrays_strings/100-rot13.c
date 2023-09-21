#include "main.h"

/**
* rot13 - Encodes a string using ROT13.
* @str: The input string to be encoded.
*
* Return: Pointer to the modified string.
*/
char *rot13(char *str)
{
int i, j;
char leet_chars[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char leet_replacements[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; leet_chars[j] != '\0'; j++)
{
if (str[i] == leet_chars[j])
{
str[i] = leet_replacements[j];
break;
}
}
}

return str;
}

