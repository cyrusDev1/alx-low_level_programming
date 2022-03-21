#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * puts_half - print the second half
 * @str: parameter
 * Return: no return
 */

void puts_half(char *str)
{
	int n = strlen(str) / 2;
	int i;

	if (strlen(str) % 2 != 0)
		n = ((strlen(str) - 1) / 2) + 1;
	i = n;

	while (str[i] != '\0')
	{
		_putchar(*(str + n));
		i++;
		n++;
	}
	_putchar(10);
}
