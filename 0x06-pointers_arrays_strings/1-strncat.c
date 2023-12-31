#include "main.h"

/**
 * _strncat - Concatenates two strings, using at most n bytes from src.
 * @dest: The destination string.
 * @src: The source string to concatenate.
 * @n: The maximum number of bytes to concatenate from src.
 *
 * Return: A pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
int dest_len = 0, i = 0;

/* Find the length of the destination string */
while (dest[dest_len] != '\0')
{
dest_len++;
}

/* Append at most n characters from src to dest */
while (src[i] != '\0' && i < n)
{
dest[dest_len] = src[i];
i++;
dest_len++;
}

return dest;
}
