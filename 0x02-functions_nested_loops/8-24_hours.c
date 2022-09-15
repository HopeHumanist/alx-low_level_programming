#include "main.h"
/**
 * jack_bauer - prints every minute of day of jack bauer
 *
 * Description: prints a list of time
 *
 * Return: 0 (Bazinga)
 */
void jack_bauer(void)
{
	int h, k;

	for (h = 0; k < 24; k++)
	{
		for (k = 0; k < 60; k++)
		{
			_putchar(h / 10 + '0');
			_putchar(h % 10 + '0');
			_putchar(':');
			_putchar(k / 10 + '0');
			_putchar(k % 10 + '0');
			_putchar(':');
		}
	_putchar('\n')
	}
}
