#include "main.h"
/**
 * more_numbers - Hajime
 *
 * Return: 0 (Bazinga)
 *
 */

void more_numbers(void)
{
	char j, k;

	for (j = 1; j <= 10; j++)
	{
		for (k = 0; k <= 14; k++)
		{
			if (j >= 10)
			{
				_putchar((j / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
