#include "main.h"

/**
* puts_half - Prints half of a string, followed by a new line.
* @str: The input string
* Prototype: void puts_half(char *str);
* The function should print the second half of the string
* If the number of characters is odd, the function should print the last n characters of the string, where n = (length_of_the_string - 1) / 2
* 
*/
void puts_half(char *str)
{
int length = 0;
int i;

while (str[length] != '\0')
{
length++;
}

if (length % 2 == 0)
{
for (i = length / 2; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
}
else
{
for (i = (length + 1) / 2; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
}

_putchar('\n');
}

