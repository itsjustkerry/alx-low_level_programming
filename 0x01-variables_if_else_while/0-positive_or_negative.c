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
		printf("n is positive\n");
	}
	else if (n == 0)
	{
		printf("n is zero\n");
	}
	else if (n < 0)
	{
		printf("n is negative\n");
	}

	printf("n is positive || n is zero || n is negative");
	return (0);
}
