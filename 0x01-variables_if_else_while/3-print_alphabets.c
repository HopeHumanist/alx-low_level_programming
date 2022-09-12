#include <stdlib.h>
#include <stdio.h>
/**
 * main - begin here
 * Description: Prints the alphabet in lower and upper cases
 *
 * Return: 0 (Eurika)
 */

int main(void)
{
	char low, upper;

	{
	for (low = 'a'; low <= 'z'; low++)
		putchar(low);
	}
	{
	for (upper = 'A'; upper <= 'Z'; upper++)
		putchar(upper);
	}
	putchar('\n');
	return (0);
}
