#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *print_diagonal - printd diagonal lines of '\'
 *@n:Number of times to print the backslash
 */
void print_diagonal(int n)
{
if (n > 0)
{
for (int i = 0; i < n; i++)
{
for (int k = n; k <= n + i; k++)
{
_putchar(' ');
}
_putchar(92);
_putchar('\n');
}
}
}
