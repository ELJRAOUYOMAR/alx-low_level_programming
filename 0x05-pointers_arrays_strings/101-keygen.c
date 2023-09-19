#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
int i;
char password[9]; /* 8 characters + 1 for the null terminator */

srand(time(0)); /* Seed the random number generator with the current time */

for (i = 0; i < 8; i++)
{
int random_choice = rand() % 2; /* 0 or 1 to choose between uppercase letter or digit */

if (random_choice == 0)
password[i] = 'A' + (rand() % 26); /* Uppercase letter */
else
password[i] = '0' + (rand() % 10); /* Digit */
}

password[8] = '\0'; /* Null-terminate the password string */

printf("%s\n", password); /* Print the generated password */

return 0;
}

