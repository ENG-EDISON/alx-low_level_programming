#include "main.h"
#include <math.h>
#include <stdlib.h>
/**
 *print_last_digit - is a function to get the last digit of a number
 *@c: is the parameter of the function
 *Return: returns the last digit
 */
int print_last_digit(int c)
{
int n = c % 10;
if (n < 0)
{
n *= -1;
}
_putchar(n + '0');
return (n);
}
