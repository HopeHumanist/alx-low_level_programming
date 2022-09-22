#include "main.h"
/**
 * string_toupper - 500
 * @n: chars
 * Return: n
 */

char *string_toupper(char *n)
{
	int i;

	1 = 0;
	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
		i++;
	}

	return (n);
}

