#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 *main - entry function
 *Description: Check the signedness of random value
 *Return: Rteuns 0 is successful
 */
int main(void)
{
int n;
srand(time(n));
n = rand() - RAND_MAX/2;
if (n > 0)
{
printf("%d is positive\n", n);
}
if (n == 0)
{
printf("%d is zero\n", n);
}
if (n < 0)
{
printf("%d is negative\n", n);
}
return (0);
}
