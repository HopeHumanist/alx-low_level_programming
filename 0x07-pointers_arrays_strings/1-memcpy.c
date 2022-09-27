#include "main.h"

/**
 * _memcpy - Hajime
 * @dest: input #
 * @src: input ##
 * @n: int #
 * Return: temp (Boom)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *temp;

	temp = dest;
	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	return (temp);
}
