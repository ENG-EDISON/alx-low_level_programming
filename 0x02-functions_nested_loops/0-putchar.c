#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *main -  This is the entry function
 *Description: This function should print _putchar followed by a new line
 *Return: The main fuction returns 0
 */

int main(void)
{
char name[10] = "_putchar";
int length = 0, char_pos;
length = strlen(name);
for (char_pos = 0; char_pos < length; char_pos++)
{
_putchar(name[char_pos]);
}
putchar('\n');
return (0);
}
