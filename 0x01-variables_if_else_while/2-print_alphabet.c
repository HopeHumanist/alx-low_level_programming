#include <stdlib.h>
#include <stdio.h>
/**
 * main - starting line
 * Description: Prints the alpha in lower case
 * Return: O (Eurika)
 */

int main(void)
{
	char low;

	for (low = "a"; low <= "z"; low++)
		putchar(low);
	putchar("\n");
	return (0);
}
