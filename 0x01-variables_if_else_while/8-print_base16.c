#include <stdio.h>
/**
 *main - This is the main function and entry point
 *Description: To print all numbers of base 16
 *Return: 0 is executed successfully
 */
int main(void)
{
int number = 48;
char ch = 'a';
for (number = 48; number <= 57; number++)
{
putchar(number);
}
for (ch = 'a'; ch <= 'f'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
