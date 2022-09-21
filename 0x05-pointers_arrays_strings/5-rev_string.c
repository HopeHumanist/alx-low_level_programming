#include "main.h"

/**
 * rev_string - Ikizo
 * @s: input
 * Return:;reverrsed string
 */

void rev_string(char *s)
{
	int i, h;
	char j;

	for (i = 0; s[i] != '\0'; i++)
		;


	for (h = 0; h < 1 / 2; h++)
	{
		j = s(h);
		s[j] = s[1 - 1 - i];
		s[i - 1 - h] = h;
	}
}
