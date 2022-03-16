#include "main.h"

/**
 * print_times_table - prints the n times table
 * starting with 0
 * @n: parameter
 * Return: no return
 */

void print_times_table(int n)
{
	int i, j, s;

	if (!(n > 15 || n < 0))
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				s = i * j;
				_putchar(',');
				_putchar(' ');
				if (s <= 9)
					_putchar(' ');
				if (s <= 99)
					_putchar(' ');
				if (s <= 99 && s >= 10)
				{
					_putchar((s / 10) + '0');
				}
				else if (s > 99)
				{
					_putchar((s / 100) + '0');
					_putchar(((s / 10) % 10) + '0');
				}

				_putchar((s % 10) + '0');
			}
			_putchar(10);
		}
	}
}
