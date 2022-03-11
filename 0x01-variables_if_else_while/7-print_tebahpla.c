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
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar(10);
	return (0);
}
