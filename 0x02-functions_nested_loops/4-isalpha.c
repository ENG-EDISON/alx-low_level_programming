#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
/**
 *_isalpha - is a fucntion to check whether a character
 *is alphabet of not
 *@c: is the character to be checked
 *Return: The function returns 1 is true,otherwise 0
 *
 */
int _isalpha(int c)
{
if (isalpha(c))
{
return (1);
}
else
{
return (0);
}
}
