#include <stdlib.h>
#include <stdio.h>
/**
 * main - ikizo
 *
 * Description:Prints all possible combos of single digits
 *
 * Return: 0 (Eurika)
 */

int main(void)
{
	int digit = 0;

	while (digit < 10)
	{
		putchar(digit + '0');
		if (digit < 9)
		{
			putchar(44);
			putchar(32);
		}
		digit++;
	}

	putchar('\n');
}
