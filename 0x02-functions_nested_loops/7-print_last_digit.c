#include "main.h"
/**
 * print_last_digit - Hajime
 *
 * @h: digit to be printed
 *
 * Description: prints the last digit
 *
 * Return: 0 (Boom)
 */

int print_last_digit(int h)
{
	int last_digit = h % 10;

	if (h < 0)
		last_digit = -1;
	_putchar(last_digit + '0');
	return (last_digit);
}
