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
	printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of int: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of long int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of long long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of float: %lu byte(s)\n", (unsigned long)sizeof(f));

	return (0);
}
