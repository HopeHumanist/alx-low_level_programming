#include "main.h"

/**
 * _strlen - Pakwambila
 * @s: string
 * Return: j (Eurika)
 */

int _strlen(char *s)
{
	int j;

	for (j = 0; s[j] != '\0';)
		j++;

	return (j);
}
