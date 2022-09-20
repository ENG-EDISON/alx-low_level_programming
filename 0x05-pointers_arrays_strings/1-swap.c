#include "main.h"
/**
 *swap_int - Function to swap contents of variables
 *in memory.
 *@a: First integer parameter
 *@b:Second integer parameter;
 *Return: nothing
 */
void swap_int(int *a, int *b)
{
int n;
n = *b;
*b = *a;
*a = n;
}
