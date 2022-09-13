#include "main.h"

/** int _islower(int c) - Ikizo
 *
 * Description: checks for lower case char
 *
 * Return: 1 if lowercase or 0 if anything else
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
