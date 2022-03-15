#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: contain integer to check
 * Return: return the value of the last digit
 */

int print_last_digit(int n)
{
	int last = n % 10;

	if (last < 0)
		last = -last;
	_putchar(last + '0');
	return (last);
}
