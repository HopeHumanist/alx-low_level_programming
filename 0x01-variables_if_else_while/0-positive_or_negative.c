#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main: entry point
 * Description: prints whether random number is positive or negative
 * Return:Always 0(Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 0)
		printf("%i is negative\n", n);
	else if (n > 0)
		printf("%i is positive\n", n);
	else
		printf("%i is zero\n", n);
	return (0);
}
