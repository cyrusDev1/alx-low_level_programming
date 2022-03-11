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
	int u, d;

	for (u = 48; u <= 57; u++)
	{
		for (d = u + 1; d <= 57; d++)
		{
			putchar(u);
			putchar(d);
			if (!(u == 56 && d == 57))
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar(10);
	return (0);
}
