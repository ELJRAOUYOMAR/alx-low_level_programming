#include "main.h"

/**
* print-rev - imprime in reversa
* *s - string 
* Return: Always 0.
*/
int print_rev(char *s)
{
int longi = 0;
int o ;
while (*s != '\0'){
longi++;
s++;
}
s--;
for(o=longo;o>0;o--){
_putchar(*s);
s--;
}
_putchar('\0');

return (0);
}

