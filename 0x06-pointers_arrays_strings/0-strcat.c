#include "main.h"
/**
 *_strcat - join two strings
 *@dest: Destination
 *@src:Source string
 *Return: A pointer to destination
 */
char *_strcat(char *dest, char *src)
{
int i = 0, j = 0;
while (dest[i] != '\0')
{
i++;
}
dest[i++] = ' ';
while ((dest[i++] = src[j++]) != '\0')
;
return (dest);
}
