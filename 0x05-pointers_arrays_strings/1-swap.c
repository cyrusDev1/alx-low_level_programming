#include "main.h"

/**
 * swap_int - Changes two values
 * @a: first parameter
 * @b: two parameter
 * Return: no return
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
