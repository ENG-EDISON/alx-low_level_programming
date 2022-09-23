#include "main.h"
/**
 *print_number - Function to print integers
 *@n:Integer to print
 *Return:Nothing
 */
void print_number(int n)
{
	unsigned int hold = n;

	if (n < 0)
	{
		_putchar('-');
		hold = -hold;
	}

	if ((hold / 10) > 0)
		print_number(hold / 10);

	_putchar((hold % 10) + '0');
}
