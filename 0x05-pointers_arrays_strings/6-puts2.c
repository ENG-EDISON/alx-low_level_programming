#include "main.h"
/**
*puts2 - Function to print every other character
*@str: String parameter
*
*
*/
void puts2(char *str)
{
while (*(str + 1) != '\0')
{
_putchar(*str);
*(str += 2);
}
_putchar('\n');
}
