#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array
 * @min: minimum
 * @max: maximum
 * Return: array or Null
 */

int *array_range(int min, int max)
{
	int *array;
	int size = 0, i;

	if (min > max)
		return (NULL);
	size = max - min;
	array = malloc(sizeof(int) * (size + 1));
	if (array == NULL)
		return (NULL);
	for (i = 0; i <= size; i++)
	{
		*(array + i) = min;
		min++;
	}
	return (array);
}
