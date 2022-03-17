#include "main.h"

/**
 * print_triangle - prints triangle followed by a new line
 * @size: parameter
 * Return: no return
 */

void print_triangle(int size)
{
	int i, j, e;

	if (size <= 0)
		_putchar(10);
	for (i = 0; i < size; i++)
	{
		e = i + 1;
		while (e < size)
		{
			_putchar(' ');
			e++;
		}
		for (j = size - i; j <= size; j++)
		{
			_putchar(35);
		}
		_putchar(10);
	}
}
