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
while (str[n] != '\0')
{
position++;
n++;
}
position = position / 2;
if (position % 2 != 0)
{
position++;
}
while (position <= n)
{
_putchar(str[position]);
position++;
}
_putchar('\n');
}

