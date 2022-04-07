#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number elements of array
 * @size: size of array
 * Return: return new memory or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *memo;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	memo = malloc(size * nmemb);
	if (memo == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		*(memo + i) = 0;
	return (memo);
}
