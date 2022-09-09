#include <stdio.h>
#include <string.h>
/**
*main - This is the entry function
*Description: This prints the digits  from 0 to 9
*Return: 0 if sucessful
*/
int main(void)
{
int num;
for (num = 0; num < 10; num++)
{
printf("%d", num);
}
putchar('\n');
return (0);
}
