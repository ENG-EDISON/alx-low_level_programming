#include "main.h"
/**
 *strcat - Function to join two strings
 *@dest: The final destination after joining
 *@src:The string to append to dest
 *Return: A pointer to dest
 */
char *_strcat(char *dest, char *src)
{
int i = 0, j = 0;
while (dest[i] != '\0')
{
i++;
}
dest[i++] = ' ';
while (dest[i++] = src[j++] != '\0');
return (dest);
}
