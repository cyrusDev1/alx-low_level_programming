#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: return 0
 *
 */

int main(void)
{
	int ch;

	for (ch = '0'; ch <= '9'; ch++)
		putchar(ch);
	for (ch = 97; ch <= 102; ch++)
		putchar(ch);
	putchar(10);
	return (0);
}
