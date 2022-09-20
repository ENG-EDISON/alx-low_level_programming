#include "main.h"

/**
 * puts2 - function that prints every other character
 *
 * @str: pointer to char
 * 
 */

void puts2(char *str)
{
<<<<<<< HEAD
int n = 0, k = 0;
while (str[k] != '\0')
{
_putchar(str[n]);
n = n + 2;
k++;
}
_putchar('\n');
=======
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(*(str + i));
		}
		i += 1;
	}
	_putchar('\n');
>>>>>>> d0ff4cd60123bb8fbb8008f3f1f330cf38ba86c4
}
