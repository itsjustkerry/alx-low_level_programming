#include <stdio.h>

/**
*main-Cprogramthatprintsthesizeofvarioustypesonthecomputer.
*
*Return: Always 0.
*/
int main(void)
{
	char d;
	int a;
	long int b; 
	long long int c;
	float f;

	/** sizeof evaluates the size of a variable*/
	printf("Size of char: %u byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of int: %u byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of long int: %u byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of long long int: %u byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of float: %u byte(s)\n", (unsigned long)sizeof(f));

	return (0);
}
