#include "main.h"
#include <stdio.h>

/**
 *
 * Return: no return
 */

void print_chessboard(char (*a)[8])
{
	int i = 0, j = 0;
	int len = sizeof(a)/sizeof(char);

	for (i = 0; i < len; i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf("%c", a[i][j]);
		}
		printf("\n");
	}
}
