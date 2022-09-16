#include "main.h"
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
/**
 *_isdigit - Function to check for digits
 *@c:The parameter to be tested
 *Return: i if upper case otherwise 0
 */
int _isdigit(int c)
{
if (isdigit(c))
{
return (1);
}
else
{
return (0);
}
}
