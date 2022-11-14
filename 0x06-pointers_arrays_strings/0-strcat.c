#include "main.h"
#include <stdio.h>

/**
 * _strcat- joins two strings together
 * @src: string one
 * @dest: string two
 *
 * Return: No value
 */
char *_strcat(char *dest, char *src)
{
	char *ptr;

	ptr = _strcat(src, dest);
	printf("%s\n", src);
	printf("%s\n", dest);
	printf("%s\n", ptr);

	return (0);
}
