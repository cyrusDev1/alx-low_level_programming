#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - this function prints the alphabet in lowercase
 *
 * Return: no return
 *
 */

void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar(10);
}
