#include "main.h"
/**
 *print_numbers - print 0 to 9
 *
 *
 */
void print_numbers(void)
{
int n = 0;
for (n = 0; n < 10; n++)
{
putchar(n + '0');
}
putchar('\n');
}
