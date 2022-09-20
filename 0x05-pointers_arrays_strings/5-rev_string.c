#include "main.h"
#include "string.h"
/**
 *rev_string - Function to print a s tring in reverse
 *@s: string to be passed.
 *
 *
 */
void rev_string(char *s)
{
int n = strlen(s);
char destination[100] = " ";
int k = 0;
while (n--)
{
destination[k] = s[n];
k++;
}
k = 0;
n = 0;
while (destination[k] != '\0')
{
s[n] = destination[k];
n++;
k++;
}
_putchar('\n');
}
