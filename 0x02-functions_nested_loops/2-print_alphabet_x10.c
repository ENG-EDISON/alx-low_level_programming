#include "main.h"
#include <stdio.h>
/**
 *print_alphabet_x10 - Is a function to print the alphabet 10 times
 *print_alphabet - prints the alphabets
 */

void print_alphabet_x10(void)
{
int n;
for (n = 0; n < 10; n++)
{
print_alphabet();
putchar('\n');
}
}
