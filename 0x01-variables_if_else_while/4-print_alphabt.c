#include <stdio.h>
#include <stdlib.h>

/**
*main-removesqande
*
*Return: Always 0.
*/
int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		if (x != 'q' && x != 'e')
			putchar(x);
		x++;
	}
	putchar('\n');

	return (0);
}

