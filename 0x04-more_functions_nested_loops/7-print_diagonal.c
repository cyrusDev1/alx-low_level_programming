#include "main.h"

/**
 * print_diagonal - print a diagonal line
 * @n: parameter
 * Return: no return
 */

void print_diagonal(int n)
{
	int i, e;

	for (i = 0; i < n; i++)
	{
		for (e = 0; e < i; e++)
			_putchar(32);
		_putchar(92);
		_putchar(10);
	}
	if (n == 0 || n < 0)
		_putchar(10);
}
