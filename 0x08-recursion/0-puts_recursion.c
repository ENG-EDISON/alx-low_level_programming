#include "main.h"
/**
 *_puts_recursion - The function to print characters using
 *recursion
 *@s:The string to be printed
 *Return: Nothing
 */
void _puts_recursion(char *s)
{
if (*(s) != '\0')
{
_putchar(*(s++));
_puts_recursion(s);
_putchar('\0');
}
}
