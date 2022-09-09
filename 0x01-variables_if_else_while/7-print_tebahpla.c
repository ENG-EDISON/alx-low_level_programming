#include <stdio.h>
/**
 *main - This is the entry function
 *Description: This prints alphabets in reverse
 *Return:0 when it executes successfully
 */
int main(void)
{
char ch = 'z';
for (ch = 'z'; ch >= 'a'; ch--)
{
putchar(ch);
}
putchar('\n');
return (0);
}
