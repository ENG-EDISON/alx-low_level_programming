#include "main.h"
/**
 *print_number - Function to print integers
 *@n:Integer to print
 *Return:Nothing
 */
void print_number(long n)
{
if (n < 0)
{
putchar('-');
n = -n;
}
if (n / 10)
{
print(n / 10);
}
_putchar(n % 10 + '0');
}

