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
	int u, d, c;

	for (u = 48; u <= 57; u++)
	{
		for (d = u + 1; d <= 57; d++)
		{
			for (c = d + 1; c <= 57; c++)
			{
				putchar(u);
				putchar(d);
				putchar(c);
				if (!(u == 55 && d == 56 && c == 57))
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);
	return (10);
}
