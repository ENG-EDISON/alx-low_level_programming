#include "main.h"
/**
 *puts_half - prints half of the string
 *@str:pointer to string
 *
 *
 */
void puts_half(char *str)
{
int n = 0, position = 0;
while (str[position] != '\0')
{
position++;
}
n = position / 2;
if (position % 2 != 0)
{
n++;
}
while (str[n] != '\0')
{
_putchar(str[n]);
n++;
}
_putchar('\n');
}

