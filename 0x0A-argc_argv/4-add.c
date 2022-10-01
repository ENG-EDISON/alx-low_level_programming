#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers and prints the result
 * @argc: number of arguments passed
 * @argv: pointer to array of arguments passed
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
int res = 0;
int num = 0;
char *ptr = 0;
if (argc < 2)
{
printf("0\n");
return (0);
}
++argv;
--argc;
while (argc--)
/**
 *get_coins_change - Get the minimum number of coins
 *@change:The balance amount
 *Return: The number of coins
 *
 */
int get_coins_change(int change)
{
num = (int)strtol(*argv, &ptr, 10);
res = res + num;
if (*ptr != 0 || num < 0 || res < 0)
{
printf("Error\n");
return (1);
}
++argv;
}
<<<<<<< HEAD
printf("%d\n", res);
return (0);
=======
return (number_coins);

}
