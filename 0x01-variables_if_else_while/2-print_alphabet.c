#include <stdio.h>
#include <stdlib.h>

/*
 * main - Entry point
 *
 * Return: returns 0 when everything works fine
 *
 */

int main(void)
{
	int ch;
	for(ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar(10);
	return (0);
}
