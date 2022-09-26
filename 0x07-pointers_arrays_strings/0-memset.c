#include "main.h"
/**
*_memset - is a function to set a a string
*@s:the string to copy to
*@c:the character to be copied to
*@n:The number of characters to be copied to.
*Return: pointer to dest
*/
void *_memset(void *s, int c, size_t n)
{
  unsigned int index;

  unsigned char *memory = s, value = c;

  for (index = 0; index < n; index++)
   {
     memory[index] = value;
   }

  return (memory);
}
