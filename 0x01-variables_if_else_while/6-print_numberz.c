#include <stdlib.h>
#include <stdio.h>
/**
 * main - ikizo
 *
 * Description: Prints all single digits
 *
 * Return: 0 (Eurika)
 */

int main(void)
{
	int digit;

	for (digit = '0'; digit <= '9'; digit++)
		putchar(digit);
	putchar('\n');
	return (0);
}
