#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *print_diagonal - printd diagonal lines of '\'
 *@n:Number of times to print the backslash
 */
void print_diagonal(int n)
{
for (int i = 0; i < n; i++)
{
for (int k = n; k <= n + i; k++)
{
putchar(' ');
}
putchar(92);
putchar('\n');
}
}
