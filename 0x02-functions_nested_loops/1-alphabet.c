#include <stdio.h>
#include "main.h"

/**
 *print_alphabet - This function prints the alphabets
 *
 *Return: always 0
 */

void print_alphabet(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
putchar('\n');
}
