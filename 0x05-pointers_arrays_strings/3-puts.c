#include "main.h"

/**
 * _puts - Olo
 * @str: input
 * Return: string
 */

void _puts(char *str)
{
	if (*str != '\0')
	{
		_putchar(*str + '0');
		str++;
	}
	_putchar('\n');
}
