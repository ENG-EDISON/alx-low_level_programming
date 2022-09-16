#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
*more_numbers - print 0 to 14 ,10 times
*
*/
void more_numbers(void)
{
int m = 0, n = 0;
for (n = 0; n < 10; n++)
{
for (m = 0; m < 15; m++)
{
if (m > 9)
{
_putchar(m / 10 + '0');
}
_putchar(m % 10 + '0');
}
_putchar('\n');
}
}
