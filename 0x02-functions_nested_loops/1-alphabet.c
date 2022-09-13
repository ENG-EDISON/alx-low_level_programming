#include <stdio.h>
#include "main.h"

/**
 *main - Entry function,all c -program has this
 *
 *Return: always 0
 */

void print_alphabet(void)
{
char ch ;
for (ch = 'a' ; ch <='z'; ch++);
{
  putchar(ch);
}
 putchar('\n');
}
