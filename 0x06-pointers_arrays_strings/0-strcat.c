#include "main.h"
/**
<<<<<<< HEAD
 *_strcat - join two strings
 *@dest: Destination
 *@src:Source string
 *Return: A pointer to destination
=======
 *strcat - Function to join two strings
 *@dest: The final destination after joining
 *@src:The string to append to dest
 *Return: A pointer to dest
>>>>>>> fb52337abd9788e6b6e8b3198631b584b4077ba4
 */
char *_strcat(char *dest, char *src)
{
int i = 0, j = 0;
while (dest[i] != '\0')
{
i++;
}
dest[i++] = ' ';
<<<<<<< HEAD
while ((dest[i++] = src[j++]) != '\0')
;
=======
while (dest[i++] = src[j++] != '\0');
>>>>>>> fb52337abd9788e6b6e8b3198631b584b4077ba4
return (dest);
}
