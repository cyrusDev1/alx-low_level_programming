#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenates two strings
 * @dest: first parameter
 * @src: second parameter
 * @n: third parameter
 * Return: return dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; src[j] && n > j; j++)
	{
		dest[i++] = src[j];
	}
	return (dest);
}
