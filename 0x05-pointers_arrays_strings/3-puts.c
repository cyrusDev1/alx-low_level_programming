#include "main.h"
#include <stdio.h>

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
		putchar(str[i]);
		i++;
	}
	putchar(10);
}
