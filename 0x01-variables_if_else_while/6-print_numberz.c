#include <stdio.h>
/**
 *main -Entry point for the program
 *Description ;Printing number uing putchar
 *Return: 0 after successful execution
 */
int main(void)
{
int a;
for (a = 48; a <= 57; a++)
{
putchar(a);
}
putchar('\n');
return (0);
}
