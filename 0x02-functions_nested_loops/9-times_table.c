#include "main.h"

/**
 * times_table - ikizo
 *
 * description: prints the * table for 9
 *
 * Return: 0 (Bye)
 */

void times_table(void)
{
	int r, c, d;

	for (r = 0; r < 10; r++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');

		for (c = 1; c <= 10; c++)
		{
			d = (r * c);
		if ((d / 10) > 0)
		{
			_putchar((d / 10 + '0'));
		}
		else
		{
			_putchar(' ');
		}
			_putchar((d % 10) + '0');
		if (c <= 10)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
		_putchar('\n');
	}
}
