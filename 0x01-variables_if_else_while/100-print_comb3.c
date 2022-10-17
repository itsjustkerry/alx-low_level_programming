#include <stdio.h>
#include <stdlib.h>

/**
*main-printsdigitscombo
*
*Return: Always 0.
*/
int main(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		putchar((a % 10) + '0');
		putchar((b % 10) + '0');
		if (a == 8 && b == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
