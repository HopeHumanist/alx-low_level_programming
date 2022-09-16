#include "main.h"

/**
 * print_most_numbers - ikizo
 *
 * Return: 0 (Bazinga)
 */

void print_most_numbers(void)
{
	int d = '0';

	while (d <= '9')
	{
		if ((d != '2') && (d != '4'))
			_putchar(d);
		d++;
	}
	_putchar('\n');
}
