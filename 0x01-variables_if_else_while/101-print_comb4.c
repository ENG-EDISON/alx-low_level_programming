#include <stdio.h>

/**
 * main - program that prints all possible different combinations of
 * three digits
 *Description:  Numbers must be separated by ,followed by a space
 * The two digits must be different
 * Return: 0
 */
int main(void)
{
int num1 = 48;
int num2, num3;
int value = 44;
while (num1 <= 57)
{
num2 = num1 + 1;
while (num2 <= 57)
{
num3 = num2 + 1;
while (num3 <= 57)
{
putchar(num1);
putchar(num2);
putchar(num3);
if (num1 != 55 || num2 != 56 || num3 != 57)
{
putchar(value);
putchar(32);
}
num3++;
}
num2++;
}
num1++;
}
putchar('\n');
return (0);
}
