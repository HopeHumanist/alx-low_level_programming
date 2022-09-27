#include "main.h"

/**
 * _memset - Ikizo
 * @s: input 1
 * @b: char input 2
 * @n: int input 1
 * Return: s (Eureeka)
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}

	return (s);
}
