#include "main.h"

/**
 * _isupper - checks if char is upper case or not
 * @c: char to be checked
 *
 * Return: 1 (Success)
 */

int _isupper(int c)
{
	if ((c = 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
