#include "main.h"
/**
 *_strcmp - Function to compare two strings
 *@s1: String 1
 *@s2: String 2
 *Return: 0 if equal, >0 if s1>s2, <0 if s1<s2
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;
while (*(s1 + i) != '\0')
{
if (*(s1 + i) > *(s2 + i))
{
return (*(s1 + i) - *(s2 + i));
}
else if (*(s1 + i) < *(s2 + i))
{
return (*(s1 + i) - *(s2 + i));

}
i += 1;
}
return (0);
}
