#include <stdio.h>
#include "main.h"

/**
* print_rev - Print a string in reverse followed by a newline.
* @s: The input string.
*/
void print_rev(char *s)
{
if (s == NULL || *s == '\0')
{
return;
}

int length = 0;
while (s[length] != '\0')
{
length++;
}

for (int i = length - 1; i >= 0; i--)
{
putchar(s[i]);
}
putchar('\n');
}

