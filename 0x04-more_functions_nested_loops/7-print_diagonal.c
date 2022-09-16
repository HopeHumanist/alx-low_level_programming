#include "main.h"

/**
 * print_diagonal - Hajime
 * @n: input
 *
 * Return: 0 (Bazinga)
 */

void print_diagonal(int n)
{
	int h, j;

	if (n <= 0)
		_putchar('\n');
	else
		for (h = 1; h <= n; h++)
		{
			for (j = 1; j < h; j++)
				_putchar(' ');
		}
	_putchar('\\');
	_putchar('\n');
}
