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
unsigned int i = 0;
int j = 0;
while (*(src + j) != '\0')
{
if (j < n)
{
*(dest + i) = *(src + j);
i++;
}
j++;
}
return (dest);
}
