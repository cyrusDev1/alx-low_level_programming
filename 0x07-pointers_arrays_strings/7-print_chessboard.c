#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - prints chessboard
 * @a: array
 * Return: no return
 */

void print_chessboard(char (*a)[8])
{
	int i, j;
	int len = (sizeof(a)/sizeof(char));

	for (i = 0; i < len; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar("\n");
	}
}
