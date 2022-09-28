#include "main.h"
/**
 *_pow_recursion - calculate the power of a number
 *@x:Number to be raised
 *@y:The power
 *Return:The power of a value raised to a number
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
if (y == 0)
{
return (1);
}
else
{
return (x * _pow_recursion(x, y - 1));
}
}
