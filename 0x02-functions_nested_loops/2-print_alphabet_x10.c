#include <stdio.h>
/**
 *print_alphabet_x10 - Is a function to print the alphabet 10 times
 *print_alphabet - prints the alphabets
 */

void print_alphabet_x10(void)
{
int count = 0;
char alphabet = 'a';
for (count = 0; count < 10; count++)
{
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
putchar(alphabet);
}
}
putchar('\n');
}
