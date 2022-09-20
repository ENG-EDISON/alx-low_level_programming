#include "main.h"

/**
 *print_array - print elements of an array
 *@a: Pointer to a string
 *@n: number of elements to print
 */
void print_array(int *a, int n)
{
int num = 0;
while (num < n)
{
printf("%d", a[num]);
if (num < n - 1)
{
printf(", ");
}
num++;
}
_putchar('\n');
}
