#include <stdlib.h>
#include <stdio.h>
/**
 * main - ikizo
 * Description: Prints all the # in base 16
 *
 * Return: 0 (Eurika)
 */

int main(void)
{
	char hex;
	int digit;

	for (digit = '0'; digit <= '9'; digit++)
		putchar(digit);
	for (hex = 'a'; hex <= 'f'; hex++)
		putchar(hex);
	putchar('\n');
	return (0);
}
