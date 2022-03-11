#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: return 0
 *
 */

int main(void)
{
	int c, d;

	for (c = 0; c <= 98; c++)
	{
		for (d = c + 1; d <= 99; d++)
		{
			putchar('0' + c / 10);
			putchar('0' + c % 10);
			putchar(32);
			putchar('0' + d / 10);
			putchar('0' + d % 10);
			if (c / 10 != 9 || c % 10 != 8)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar(10);
	return (0);
}
