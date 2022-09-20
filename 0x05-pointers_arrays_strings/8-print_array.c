#include "main.h"

/**
 *print_array - print elements of an array
 *@a: Pointer to a string
 *@n: number of elements to print
 */
void print_array(int *a, int n)
{
int num = 0;
while (num <= n)
{
_putchar(a[num]);
_putchar(',');
_putchar(' ');
num++;
}
_putchar('\n');
}
