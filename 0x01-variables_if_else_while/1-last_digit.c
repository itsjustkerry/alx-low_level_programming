#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main-assignsrandomnumbertonandprintswhethergreater,lesserorequaltozero
*
*Return: Always 0.
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10
	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n % 10);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is %d and is zero\n", n % 10);
	}
	else if (n < 6 && !0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n % 10);
	}
	return (0);
}
