#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 * Return: 0
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int h, j;

		for (h = 1; h < size; h++)
		{
			for (j = h; j < size; j++)
			{
				_putchar(' ');
			}

				for (j = 1; j < size; j++)
				{
					_putchar('#');
				}
			_putchar('\n');
		}
	}
}
