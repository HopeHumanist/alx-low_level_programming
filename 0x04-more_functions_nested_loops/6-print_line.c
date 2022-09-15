#include "main.h"
/**
 * print_line - ikizo
 * @n: number of times to print char
 *
 * Return: 0 (Boom)
 */

void print_line(int n)
{
	if (n > 0)
	{
		_putchar('_');
		_putchar('\n');
	}
		else
		{
			while (n <= 0)
				_putchar('\n');
		}
}
