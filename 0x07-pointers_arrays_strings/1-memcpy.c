#include "main.h"
/**
*_memcpy - is a function to copy a string from src to dest
*@src:the string to copy from
*@dest:the memory to be copied to
*@n:The number of characters to be copied to.
*Return: pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
int i;
for (i = 0; n; i++)
{
dest[i] = src[i];
n--;
}
return (dest);
}
