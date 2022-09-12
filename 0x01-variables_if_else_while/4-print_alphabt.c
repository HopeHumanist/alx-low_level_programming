#include <stdlib.h>
#include <stdio.h>
/**
 * main - we begin here
 * Description: Prints alpha in low case except e and q
 *
 * Return: 0 (Eurika)
 */

int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
	if (a != 'q' && a != 'e')
		putchar(a);
	a++;
	}
	putchar('\n');
	return (0);
}
