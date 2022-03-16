#include "main.h"
/**
 * jack_bauer -  count down 24hrs
 * @a is hours
 * @b is minutes
 * Return: void.
 */
void jack_bauer(void)
{
	int a, b;

	for (a = 0 ; aa <= 23 ; a++)
	{
		for (b = 0 ; b <= 59 ; b++)
		{
			_putchar('0' + (a / 10));
			_putchar('0' + (a % 10));
			_putchar(':');
			_putchar('0' + (b / 10));
			_putchar('0' + (b % 10));
			_putchar('\n');
		}
	}
}
