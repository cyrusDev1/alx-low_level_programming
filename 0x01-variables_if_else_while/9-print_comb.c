#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: returns 0
 *
 */

int main(void)
{
	int ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
		if (ch != '9')
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);
	return (0);
}
