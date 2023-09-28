#include "main.h"

/**
 * wildcmp - Compares two strings considering the special character *.
 * @s1: The first string.
 * @s2: The second string with the special character *.
 *
 * Return: 1 if the strings can be considered identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
if (*s2 == '*')
{
/* If * is the last character, it matches any remaining characters in s1 */
if (*(s2 + 1) == '\0')
return (1);

/* If * is followed by a character, recursively compare s1 with s2, skipping one character in s1 */
if (wildcmp(s1, s2 + 1))
return (1);

/* If * is not the last character, recursively compare s1 with s2, skipping one character in s2 */
if (*s1 != '\0' && wildcmp(s1 + 1, s2))
return (1);

return (0);
}

if (*s1 == '\0' && *s2 == '\0')
return (1);

if (*s1 == *s2)
return (wildcmp(s1 + 1, s2 + 1));

return (0);
}

