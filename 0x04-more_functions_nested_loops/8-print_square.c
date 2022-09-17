#include "main.h"
/**
 * print_square - lets begin
 * @size: size of the square
 *
 * Return: 0
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int h, j;

		for (h = 0; h < size; h++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
