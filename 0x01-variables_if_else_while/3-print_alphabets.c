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

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar(10);
	return (0);
}
