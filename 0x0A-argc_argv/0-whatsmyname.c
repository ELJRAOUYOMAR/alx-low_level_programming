#include "main.h"

/**
 * main - prints the program name
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
    if (argc > 0)
    {
        for (int i = 0; argv[0][i] != '\0'; i++)
        {
            putchar(argv[0][i]);
        }
        putchar('\n');
        return 0;
    }
    return 1;
}
