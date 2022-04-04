#include "main.h"

/**
 * alloc_grid - creates two dimensions array
 * @width: first parameter
 * @height: second parameter
 * Return: return an array or 0
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int i, j;

	if (width == 0 || height == 0)
		return (NULL);
	array = (int **) malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		array[i] = (int *) malloc(sizeof(int) * width);
		if (array[i] !=	NULL)
		{
			for (j = 0; j < width; j++)
			{
				array[i][j] = 0;
			}
		}
		else
		{
			free(array);
			while (i >= 0)
			{
				free(array[i]);
				i--;
			}
			return (NULL);
		}
	}
	return (array);
}
