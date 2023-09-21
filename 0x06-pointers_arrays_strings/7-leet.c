#include "main.h"

/**
* 
* leet - encodes a string into 1337.
* @str: The input string to be encoded.
*
* Return: Pointer to the modified string.
* 
*/
char *leet(char *str)
{
int i, j;
char leet_chars[] = "aAeEoOtTlL";
char leet_replacements[] = "443370011";

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
