#include "main.h"
/**
 * print_line - ikizo
 * @n: number of times to print char
 *
 * Return: 0 (Boom)
 */

void print_line(int n)
{
	int h;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (h => 1; h <= n; h++)
		{
			_putchar('_');
		}
			_putchar('\n');
	}
}
