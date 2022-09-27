#include "main.h"

/**
 * _strchr - Hajime
 * @s: yoda
 * @c: yin
 * Return: s + 1 (Bazing)
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
		s++;
	}
	return (s + 1);
}
