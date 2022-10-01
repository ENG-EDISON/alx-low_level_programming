#include "main.h"
#include <stdio.h>
/**
 * main - prints the name of the program followed by a new line
 * @argc: number of arguments
 * @argv: pointer to array of input arguments
 *
 * Return: 0 on success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
char *hold;
int n=0;
hold=argv[0];
while (hold[n] != '\0')
{
putchar(hold[n]);
n++;
}
putchar('\n');
return (0);
}
