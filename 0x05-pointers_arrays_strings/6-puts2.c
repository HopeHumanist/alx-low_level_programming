#include "main.h"

/**
 * puts2 - Olo
 * @str: input
 * Return: string
 */

void _puts(char *str)
{
	int j;

	for (j = 0; str[j] != '\0'; j++)
	{
		if (j % 2 == 0)
			_putchar(str[j]);
	}
	_putchar('\n');
}
