#include <stdio.h>
#include <stdlib.h>
/**
 *main - This is the entry function that returns 0
 *Description: This function prints alphabets both in upper and lower case
 *Return: 0 successfully
 */
int main(void)
{
int Alph;
for (Alph  = 'a'; Alph <= 'z'; Alph++)
{
putchar(Alph);
}
for (Alph = 'A'; Alph <= 'Z'; Alph++)
{
putchar(Alph);
}
putchar('\n');
return (0);
}
