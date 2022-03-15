#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - this function prints the alphabet in lowercase
 *
 * Return: no return
 *
 */

void print_alphabet(void)
{
	int i;
	for (i = 97; i<= 122; i++)
	{
		_putchar(i);
	}
	_putchar(10);
}
