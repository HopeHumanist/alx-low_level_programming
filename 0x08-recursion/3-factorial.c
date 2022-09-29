#include "main.h"

/**
 * factorial - Ikizo
 * @n: input
 * Return: result
 */

int factoria (int n)
{
	int result = n;

	if (n < 0)
		return (-1);
	else if (n >= 0 && n <= 1)
		return (1);

	result *= factorial(n - 1);

	return (result);
}
