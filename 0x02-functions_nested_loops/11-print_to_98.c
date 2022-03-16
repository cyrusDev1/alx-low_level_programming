#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * followed by a new line
 * @n: integer to display
 * Return: no return
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
	else if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
}
