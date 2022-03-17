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
		num = -num;
	}
	if (num / 10)
		print_number(num / 10);
	_putchar(num % 10 + '0');
}
