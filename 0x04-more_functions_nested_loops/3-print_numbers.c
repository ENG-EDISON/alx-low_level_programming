#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
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
_putchar(n + '0');
}
_putchar('\n');
}
