#include "main.h"

/**
* is_separator - Checks if a character is a separator.
* @c: The character to check.
*
* Return: 1 if c is a separator, 0 otherwise.
*/
int is_separator(char c)
{
char separators[] = " \t\n,;.!?\"(){}";
int i;

for (i = 0; separators[i] != '\0'; i++)
{
if (c == separators[i])
{
return 1;
}
}

return 0;
}

/**
* cap_string - Capitalizes all words in a string.
* @str: The input string.
*
* Return: A pointer to the modified string.
*/
char *cap_string(char *str)
{
int i = 0;

while (str[i] != '\0')
{
if (is_separator(str[i]))
{
i++; /* Skip separators */
}
else if (str[i] >= 'a' && str[i] <= 'z') /* Check if lowercase letter */
{
/* Convert to uppercase by subtracting the ASCII difference */
str[i] = str[i] - 'a' + 'A';
i++;
}
else
{
i++; /* Skip non-lowercase letters */
}
}

return str;
}

