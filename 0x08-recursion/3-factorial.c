#include "main.h"
/**
 *factorial - The function thats get the factorial.
 *@n:Parameter
 *Return: Factorial of n
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}
}
