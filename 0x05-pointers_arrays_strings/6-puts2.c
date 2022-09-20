#include "main.h"

/**
 * puts2 - function that prints every other character
 *
 * @str: pointer to char
 * 
 */

void puts2(char *str)
{
int n = 0, k = 0;
while (str[k] != '\0')
{
_putchar(str[n]);
n = n + 2;
k++;
}
_putchar('\n');
}
