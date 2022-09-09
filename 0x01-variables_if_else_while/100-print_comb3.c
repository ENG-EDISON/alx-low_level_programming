#include <stdio.h>
/**
*main -This program prints all possible  combinations of two digits
*Desccription: Numbers must be separated by commas followed by a space
*Return: This code returns 0 when successful
*/
int main(void)
{
int num1 = 48;
int num2;
int value = 44;
while (num1 <= 57)
{
num2 = num1 + 1;
while (num2 <= 57)
{
putchar(num1);
putchar(num2);
if (num1 != 56 || num2 != 57)
{
putchar(value);
putchar(32);
}
num2++;
}
num1++;
}
putchar('\n');
return (0);
}
