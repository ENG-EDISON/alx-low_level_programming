#include "main.h"
#include <stdio.h>
#include <string.h>
/**
*print_sign - This function prints the sign and returns
*Value according to the set conditions
*@n:This is the value of comparison
*Return:Return 1 if @n is greater than 0,
*returns 0 is @n is equal to 1
*return -1 if @n is less than 0
*/

int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n == 0)
{
_putchar(45);
return (0);
}
else
{
_putchar(48);
return (-1);
}
}
