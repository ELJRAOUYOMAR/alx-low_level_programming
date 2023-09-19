#include "main.h"

/**
* rev_string - Reverse a string in place.
* @s: The input string to reverse.
*/
void rev_string(char *s)
{
if (s == NULL)
return;

int length = 0;
int i;

while (s[length] != '\0')
{
length++;
}

for (i = 0; i < length / 2; i++)
{
/* Swap characters from the beginning and end of the string */
char temp = s[i];
s[i] = s[length - 1 - i];
s[length - 1 - i] = temp;
}
}

