#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: returns 0 when everithing's alright
 *
 */

int main(void)
{
	int n;
	char c;

	srand(time(0));
	while (n <= 2645)
	{
		c = rand() % 128;
		n += c;
		putchar(c);
	}
	putchar(2772 - n);
	return (0);
}
