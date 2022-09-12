#include <stdlib.h>
#include <stdio.h>
/**
 * main - begin here
 * Description: Prints the alphabet in lower caes reverse
 *
 * Return: 0 (Eurika)
 */

int main(void)
{
	char low;

	{
	for (low = 'z'; low >= 'a'; low--)
		putchar(low);
	}
	putchar('\n');
	return (0);
}
