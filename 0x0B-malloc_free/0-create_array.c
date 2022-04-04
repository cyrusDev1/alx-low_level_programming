#include "main.h"

/**
 * create_array - creates an array of char
 * @size: size of array
 * @c: specific char
 * Return: a pointer to the array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	p = malloc(sizeof(char) * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		*(p + i) = c;
	return (p);
}
