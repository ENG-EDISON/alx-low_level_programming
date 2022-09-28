#include "main.h"
/**
 *_puts_recursion - The function to print characters using
 *recursion
 *@s:The string to be printed
 *Return: Nothing
 */
void _puts_recursion(char *s)
{
if(*(s) == '\0')
{
putchar('\0');
return;
}
putchar(*s);
_puts_recursion(s+1);
}
