#include "main.h"

/**
* Description - The standard library provides a similar function: strcmp. Run man strcmp to learn more.
*
* Return: 0 if the strings are equal, a positive value if s1 > s2, and a negative value if s1 < s2.
*/

int _strcmp(char *s1, char *s2)
{
while (*s1 && *s2 && *s2 == *s1)
{
s1++;
s2++;
}

/* Return value: 0 if equal, positive if s1 > s2, negative if s1 < s2 */
return *s1 - *s2;
}
