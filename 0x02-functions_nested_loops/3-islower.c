#include "main.h"

/**
 * _islower - checks for lower case char
 * @c: - char to be checked
 *
 * Return: 1 lowercase or 0 if anyother
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
