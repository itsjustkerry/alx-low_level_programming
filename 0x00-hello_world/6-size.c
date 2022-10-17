#include <stdio.h>

/**
*main -Cprogramthatprintsthesizeofvarioustypesonthecomputer.
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
	printf("Size of char: %lu bytes\n", sizeof(charType));
	printf("Size of int: %lu bytes\n", sizeof(intType));
	printf("Size of long int: %lu bytes\n", sizeof(longintType));
	printf("Size of long long int: %lu byte\n", sizeof(longlongintType));
	printf("Size of float: %lu bytes\n", sizeof(floatType));

	return (0);
}
