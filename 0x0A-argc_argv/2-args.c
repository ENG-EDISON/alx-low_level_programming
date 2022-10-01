#include "main.h"
#include <stdio.h>
/**
 *main - Entry function to print the commans
 *@argc:The number of commands
 *@argv:The NULL pointer to command
 *Return:0 if successful
 */
int main(int argc, char *argv[])
{
int i = 0;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
