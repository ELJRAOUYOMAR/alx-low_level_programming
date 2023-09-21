#include "main.h"

/**
* string_toupper - Converts all lowercase letters in a string to uppercase.
* @str: The input string to be modified.
*
* Return: A pointer to the modified string.
*/
char *string_toupper(char *str)
{
int i = 0;

while (str[i] != '\0')
{
/* Check if the character is a lowercase letter (a-z) */
if (str[i] >= 'a' && str[i] <= 'z')
{
/* Convert to uppercase by subtracting the ASCII difference */
str[i] = str[i] - ('a' - 'A');
}
i++;
}

return str;
}

