#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_number - print number
 * @n: parameter
 * Return: no return
 */

void print_number(int n)
{
	unsigned int numb = n;

	if (n < 0)
	{
		_putchar('-');
		numb = -numb;
	}
	if (numb / 10)
		print_number(numb / 10);
	_putchar(numb % 10 + '0');
}
