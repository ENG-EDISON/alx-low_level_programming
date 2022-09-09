#include <stdio.h>
#include <string.h>
/**
 *main - Entry function to program
 *Description: Function to print alphabets
 *Return: always 0 if successful
 */
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch != 'e' || ch != 'q')
{
putchar(ch);
}
}
putchar('\n');
return (0);
}
