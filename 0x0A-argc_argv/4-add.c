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
printf("%d\n", res);
return (0);
}
