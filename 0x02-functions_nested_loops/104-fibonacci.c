#include <stdio.h>
#include <stdlib.h>

/**
 * main -  prints the first 98 Fibonacci numbers
 * Return: return 0
 */

int main(void)
{
	unsigned long number1 = 0, number2 = 1, follow;
	int i;

	for (i = 0; i < 98; i++)
	{
		follow = number1 + number2;
		printf("%lu", follow);
		number1 = number2;
		number2 = follow;
		if (i != 97)
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}
