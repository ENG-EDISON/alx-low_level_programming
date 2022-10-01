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
int i = 0;
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}
