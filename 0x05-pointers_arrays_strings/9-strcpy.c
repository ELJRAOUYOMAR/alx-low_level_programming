#include "main.h"

/**
* _strcpy - Copies a string pointed to by src to the buffer pointed to by dest.
* @dest: Pointer to the destination buffer.
* @src: Pointer to the source string.
*
* Return: Pointer to dest.
*/
char *_strcpy(char *dest, char *src)
{
char *copy = dest;

while (*src)
{
*dest = *src;
dest++;
src++;
}

/*  Add the null terminator to the destination string */
*dest = '\0'; 
return copy;
}

