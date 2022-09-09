#include <stdio.h>
/**
 *main - This is the entry function
 *Description: Prints all combination of single digits seperated by commas
 *Return: 0 is executed successfully
 */
int main(void)
{
int num = 0;
for (num = 48; num <= 57; num++)
{
putchar(num);
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
