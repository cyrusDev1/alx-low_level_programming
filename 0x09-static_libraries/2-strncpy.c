#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copies a string
 * @dest: first parameter
 * @src: second parameter
 * @n: thrid parameter
 * Return: return dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (src[j] != '\0')
		j++;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];

	for (i = j; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
