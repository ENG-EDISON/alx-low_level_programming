#include "main.h"
/**
 *
 *
 *
 *
 */
void print_square(int size)                                                                                        
{                                                                                                                 
int i, k;
for (i = 0; i < size; i++)
{
for (k = 0; k <= size; k++)
{
_putchar('#');
}
_putchar('\n');
}
if(size<0)
{
_putchar('\n');
}
}
