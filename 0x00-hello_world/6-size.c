#include <stdio.h>
/**
 * main - the entry point
 *
 * Description: Prints different sizes of types
 *
 * Return: Always 0 (Eurika)
 */

int main (void)
{
	printf("Size of a char: %i byte(s)\n", (int) sizeof(char));
	printf("Size of a char: %i byte(s)\n", (int) sizeof(int));
	printf("Size of a char: %i byte(s)\n", (int) sizeof(float));
	printf("Size of a char: %i byte(s)\n", (int) sizeof(double));
	return (0);
}
