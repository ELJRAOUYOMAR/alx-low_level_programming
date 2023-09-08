#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Error)
 */
int main(void)
{
ssize_t len = 59;
char *quote = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

write(2, quote, len);
return (1);
}
