#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main-assignsrandomnumbertovariablen
*
*Return: Always 0.
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("n is positive %d,\n");
	}
	else if (n == 0)
	{
		printf("n is zero %d,\n");
	}
	else if (n < 0)
	{
		printf("n is negative %d,\n");
	}

	printf("%d is positive || %d is zero || %d is negative");
	return (0);
}
