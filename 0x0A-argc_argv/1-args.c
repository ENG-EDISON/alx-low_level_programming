#include "main.h"
#include <stdio.h>
/**
 * main - prints the number of commands
* @argc: number of arguments
 * @argv: pointer to array of input arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
printf("%d\n", argc - 1);
(void) argv;
return (0);
}
