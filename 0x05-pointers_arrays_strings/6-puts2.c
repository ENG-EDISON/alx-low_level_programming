#include "main.h"
/**
*puts2 - Function to print every other character
*@str: String parameter
*
*
*/
void puts2(char *str)
{
int n = 0;
while (str[n] != '\0')
{
_putchar(str[n]);
}
_putchar('\n');
}
