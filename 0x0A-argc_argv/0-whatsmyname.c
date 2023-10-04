#include "main.h"
#include <stdio.h>

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
printf("%s\n", argv[0]);
return 0;
}
return 1;
}
