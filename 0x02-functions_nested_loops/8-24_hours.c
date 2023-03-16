#include "main.h"

/**
 * jack_bauer - prints every minute from 00:00 to 23:59
 *
 * Return: 0
 */
void jack_bauer(void)
{
	int i, j, k, l;

	for (i = 48; i <= 50; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			for (k = 48; k <= 57; k++)
			{
				for (l = 48; l <= 57; l++)
				{
					if ((i != 50 || j < 52) && k < 54)
					{
						_putchar(i);
						_putchar(j);
						_putchar(58);
						_putchar(k);
						_putchar(l);
						_putchar('\n');
					}
				}
			}
		}
	}
}
