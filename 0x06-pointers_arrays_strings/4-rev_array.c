#include "main.h"
/**
 * reverse_array - ikizo
 * @a: #
 * @n: ##
 * Return: nada
 */

void reverse_array(int *a, int n)
{
	int i, b;

	i = 0;
	while (i < n)
	{
		n--;
		b = a[i];
		a[i] = a[n];
		a[n] = b;
		i++;
	}
}
