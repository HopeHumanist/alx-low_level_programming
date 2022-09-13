#include "main.h"

/**
 * print_alphabet_x10 - Hajime
 *
 * Description: prints alpha x10
 *
 * Return: 0 (Baga)
 */

void print_alphabet_x10(void)
{
	char K, J;

	for (K = 1; K <= 10; K++)
		{
			for (J = 'a'; J <= 'z'; J++)
				{
					_putchar(J);
					_putchar('\n');
				}
		}
}
