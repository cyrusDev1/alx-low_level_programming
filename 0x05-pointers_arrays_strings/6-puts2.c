#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 -  prints every other character of a string
 * @str: parameter
 * Return: no return
 */

void puts2(char *str)
{
	int i, len = strlen(str), j;
	
	for (i = 0; i < len / 2; i++)
	{
		_putchar(*(str + j));
		j = j + 2;
	}
	_putchar(10);
}
