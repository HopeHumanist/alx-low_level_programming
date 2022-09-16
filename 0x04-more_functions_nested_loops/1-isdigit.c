#include "main.h"

/**
 * _isdigit - hajime
 * @c: int type to be checked
 * Return: 1 (success) or 0 (not successful)
 */

int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	else
		return (0);
}
