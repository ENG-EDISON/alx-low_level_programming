#include "main.h"
/**
 *_strcmp - Function to compare two strings
 *@s1: String 1
 *@s2: String 2
 *Return: 0 if equal, >0 if s1>s2, <0 if s1<s2
 */
int *_strcmp(char *s1, char *s2)
{
int i;
for (i = 0; s[i] == t[i]; i++)
{
if (s[i] == '\0')
{
return (0);
}
else
{
return (s[i] - t[i]);
}
}
}
