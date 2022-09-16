#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
*print_numbers - print 0 to 9
*
*/
void print_numbers(void)
{
int m = 0, n = 0;
for (n = 0; n < 10; n++)
{
for (m = 0; m < 15; m++)
{
if (m > 9)
{
_putchar(n / 10 + '0');
}
_putchar(n % 10 + '0');
}
_putchar('\n');
}
}
