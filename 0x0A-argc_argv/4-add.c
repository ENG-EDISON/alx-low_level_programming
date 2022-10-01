#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main - Entry function to print the multiplication
 *of two numbers in the command line
 *@argc:The number of commands
 *@argv:The NULL pointer to command
 *Return:0 if successful
 */
int main(int argc, char *argv[])
{
int balance = 0;
if (argc != 2)
{
printf("Error\n");
return (1);
}
else
{
balance = atoi(argv[1]);
}
if (balance < 0)
{
printf("0\n");
}
else
{
int balance = atoi(argv[1]);
get_coins_change(balance);
}
return (0);
}
/**
 *get_coins_change - Get the minimum number of coins
 *@change:The balance amount
 *Return: The number of coins
 *
 */
void get_coins_change(int change)
{
const int coins[5] = {25, 10, 5, 2, 1};
int count = 0;
int Hold = change;
int number_coins = 0;
int remainder = 0;
for (count = 0; count < 5; count++)
{
remainder = Hold / coins[count];
if (remainder >= 1)
{
number_coins += remainder;
Hold = Hold - (coins[count] * remainder);
remainder = 0;
}
if (Hold == 0)
{
printf("%d\n", number_coins);
break;
}
}
}
