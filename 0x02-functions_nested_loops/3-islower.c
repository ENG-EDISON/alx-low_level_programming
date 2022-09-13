#include "main.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
/**
*_islower - Checks if character is lower case
*@c: The character to be passed to a function
*Return:return 1 if character is lower case else  return 0
*
*/
int _islower(int c)
{
if (islower(c))
{
return (1);
}
else
{
return (0);
}
}
