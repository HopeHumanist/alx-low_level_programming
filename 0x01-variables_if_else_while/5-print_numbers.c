#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point
 *
 * Description: Prints all numbers of base 10
 *
 * Return: 0 (Eurika)
 */

int main(void)
{
	char digit;

	for (digit = '0'; digit <= '9'; digit++)
		putchar(digit);
	putchar('\n');
	return (0);
}
