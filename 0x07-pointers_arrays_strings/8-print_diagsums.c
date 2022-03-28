#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix of integers
 * @a: bi array
 * @size: size of array
 */

void print_diagsums(int *a, int size)
{
	int i;
	unsigned int d1, d2;

	for (i = 0; i < size; i++)
	{
		d1 += a[(size * i) + i];
		d2 += a[(size * (i + 1)) - (i + 1)];
	}
	printf("%d, %d\n", d1, d2);
}
