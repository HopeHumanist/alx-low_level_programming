#include "main.h"

/**
 * print_alphabet - ikizo
 *
 * Description: prints the alpha in lowercase
 *
 * Return: 0 (Baga)
 */

void print_alphabet(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
		_putchar(low);
	_putchar('\n');
}
