#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints 10 times the alphabet, in lowercase
 *
 * Reuturn: no return
 *
 */

void print_alphabet_x10(void)
{
	int n;
	for (n = 0; n <= 9; n++)
	{
		int i;
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		_putchar(10);
	}
}
