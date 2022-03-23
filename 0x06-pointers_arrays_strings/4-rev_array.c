#include "main.h"

/**
 * reverse_array - reverse an array
 * @a: array
 * @n: size of array
 * Return: no return
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int tmp;

	for (i = 0; i < n; i++)
	{
		tmp = *(a + i);
		*(a + i) = *(a + n - 1);
		*(a + n - 1) = tmp;
		n--;
	}
}
