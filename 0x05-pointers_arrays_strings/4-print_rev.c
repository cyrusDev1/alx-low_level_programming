#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev -  prints a string, in reverse
 * @s: parameter
 * Return: no return
 */

void print_rev(char *s)
{
	int len = strlen(s);

	while (len != 0)
	{
		_putchar(s[len - 1]);
		len--;
	}
	_putchar(10);
}
