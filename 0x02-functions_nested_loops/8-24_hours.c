#include "main.h"
#include <stdlib.h>
/**
 *jack_bauer - The function to print time from 00:00 to 23:59
 *
 */
void jack_bauer(void)
{
int Hour, Min;
for (Hour = 0; Hour <= 23; Hour++)
{
for (Min = 0; Min <= 59; Min++)
{
_putchar(Hour / 10 + '0');
_putchar(Hour % 10 + '0');
_putchar(':');
_putchar(Min / 10 + '0');
_putchar(Min % 10 + '0');
_putchar('\n');
}
}
}
