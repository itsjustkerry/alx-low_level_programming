#include <stdio.h>
#include <stdlib.h>

/**
*main-printshexadecimals
*
*Return: Always 0.
*/
int main(void)
{
	int a;
	char b;

	for (a = 0; a <= 9; a++)
		putchar(a + '0');
	for (b = 'a'; b <= 'f'; b++)
		putchar(b);
	putchar('\n');

	return (0);
}
