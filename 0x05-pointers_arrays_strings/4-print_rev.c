#include "main.h"
#include "string.h"
/**
 *print_rev - Function to print a s tring in reverse
 *@s: string to be passed.
 *
 *
 */
void print_rev(char *s)
{
int n = strlen(s);
while (n--)
{
_putchar(s[n]);
}
_putchar('\n');
}
