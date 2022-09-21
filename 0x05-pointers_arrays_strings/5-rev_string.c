#include "main.h"

/**
 * rev_string - Ikizo
 * @s: input
 * Return: 0 (BoomBaby)
 */

void rev_string(char *s)
{
	int i, j, k;
	char h;

	for (i = 0; s[i] != '\0'; i++)
	{
		;
	}
	k = i;
	for (i--; j = 0; j < k / 2; i--, j++)
	{
		h = s(j);
		s[j] = s[i];
		s[i] = h;
	}
}
