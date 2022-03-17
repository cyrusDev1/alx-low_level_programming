#include "main.h"

/**
 * print_most_numbers - print the digit without 4 and 2
 * Return: no return
 */

void print_most_numbers(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		if (n != 50 && n != 52)
			_putchar(n);
	}
	_putchar(10);
}
