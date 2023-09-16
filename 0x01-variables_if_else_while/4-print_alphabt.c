#include <stdio.h>

/**
* main - Entry point , Lower and upper letters except q and e
*
* Return: Always 0 (Success)
*/

int main(void)
{
char lowercase = 'a';
while(lowercase <= 'z')
{
if (lowercase != 'e' && lowercase != 'q')
{
putchar(lowercase);
}
lowercase++;
}
putchar("\n");

return(0);

}
