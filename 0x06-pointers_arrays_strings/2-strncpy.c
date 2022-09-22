#include "main.h"
/**
 *_strncpy - Function to copy strings from src to dest
 *@dest: The final destination after joining
 *@src:The string to append to dest
 *@n: The number of charactres to copy
 *Return: A pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
while ((i < n && *(src + i)) != '\0')
{
*(dest + i) = *(src + i);
i++;
}
while (i != n)
{
dest[i++] = '\0';
}
return (dest);
}
