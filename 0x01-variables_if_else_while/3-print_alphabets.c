#include <stdio.h>
#include <stdlib.h>

/**
*main-printsalphabetinupperthenlowercase
*
*Return: Always 0.
*/
int main(void)
{
	char F;

	for (F = 'a'; F <= 'z'; F++)
		putchar(F);
	for (F = 'A'; F <= 'Z'; F++)
		putchar(F);
	putchar('\n');

	return (0);
}
