#include "main.h"
/**
 *_strlen - function to find the length of a string
 *@s: is the string to be passed,or array of characters
 *Return: The size of the string passed
 */
int _strlen(char *s)
{
int n = 0;
while (s[n] != '\0')
{
n++;
}
return (n);
}
