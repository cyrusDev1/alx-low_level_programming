#include "main.h"

/**
 * _puts - display the chaine
 * @str: parameter
 * Return: no return
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar(10);
}
