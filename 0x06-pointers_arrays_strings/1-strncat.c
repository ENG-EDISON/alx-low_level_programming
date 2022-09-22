#include "main.h"
/**
 *_strncat - Function to join two strings
 *@dest: The final destination after joining
 *@src:The string to append to dest
 *@n: The number of charactres to append
 *Return: A pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
unsigned int i = 0;
int j = 0;
while (*(dest + i) != '\0')
{
i++;
}
while (*(src + j) != '\0')
{
if (j < n)
{
*(dest + i) = *(src + j);
i++;
}
j++;
}
dest[i++] = '\0';
return (dest);
}
