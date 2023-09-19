#include "main.h"

/**
* _strlen - Returns the length of a string.
* @s: A pointer to a string.
*
* Return: The length of the string (number of characters).
*/
int _strlen(char *s)
{
int length = 0; // Initialize length to 0

// Iterate through the string until the null terminator is encountered
while (*s != '\0')
{
length++; // Increment the length
s++;      // Move to the next character in the string
}

return (length);
}

