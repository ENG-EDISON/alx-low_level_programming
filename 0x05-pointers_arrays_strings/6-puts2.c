#include "main.h"
/**
*puts2 - Function to print every other character
*@str: String parameter
*
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
