#include <stdio.h>

/**
 * main - Cprogram that prints the size of various types on the computer.
 *
 * Return: Always 0.
 */
int main(void)
{	
	int intType;
	float floatType;
	long int longintType;
	long long int longlongintType;
	char charType;

	/** sizeof evaluates the size of a variable*/
	printf("Size of int: %zu bytes\n", sizeof(intType));
	printf("Size of float: %zu bytes\n", sizeof(floatType));
	printf("Size of long int: %zu bytes\n", sizeof(longintType));
	printf("Size of char: %zu byte\n", sizeof(charType));
	printf("Size of long long int: %zu bytes\n", sizeof(longlongintType));

	return (0);
}
