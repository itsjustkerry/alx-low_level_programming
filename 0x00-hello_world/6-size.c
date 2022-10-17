#include <stdio.h>

/**
*main-Cprogramthatprintsthesizeofvarioustypesonthecomputer.
*
*Return: Always 0.
*/
int main(void)
{
	char charType;
	int intType;
	long int longintType;
	long long int longlongintType;
	float floatType;

	/** sizeof evaluates the size of a variable*/
	printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(charType));
	printf("Size of int: %lu byte(s)\n", (unsigned long)sizeof(intType));
	printf("Size of long int: %lu byte(s)\n", (unsigned long)sizeof(longintType));
	printf("Size of long long int: %lu byte\n", (unsigned long)sizeof(longlongintType));
	printf("Size of float: %lu byte(s)\n", (unsigned long)sizeof(floatType));

	return (0);
}
