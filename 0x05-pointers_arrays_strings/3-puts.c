#include "main.h"
/**
 *_puts - Function to print strings fo characters
 *@str: The string to be printed
 *
 */
void _puts(char *str)
{
int n = 0;
while (str[n] != '\0')
{
_putchar(str[n]);
n++;
}
_putchar('\n');
}
