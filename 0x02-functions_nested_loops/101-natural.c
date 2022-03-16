#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - list all the natural numbers below 10 
 * that are multiples of 3 or 5
 *
 * Return: return 0
 */

int main(void)
{
	int i, sum;

	for (i = 0; i <= 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
