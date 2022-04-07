#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer
 * @old_size: old size
 * @new_size: new size
 * Return: no return
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *real;
	unsigned int i = 0;
	char *ptr1;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return (malloc(new_size));
	real = malloc(new_size * sizeof *real);
	if (real == NULL)
		return (NULL);
	ptr1 = ptr;
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			*(real + i) = *(ptr1 + i);
	}
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			*(real + i) = *(ptr1 + i);
	}
	free(ptr);
	return (real);
}
