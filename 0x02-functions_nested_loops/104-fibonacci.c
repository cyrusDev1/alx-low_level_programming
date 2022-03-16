#include <stdio.h>
#include <stdlib.h>

/**
 * main -  prints the first 98 Fibonacci numbers
 * Return: return 0
 */

int main(void)
{
	unsigned long number1 = 0;
	unsigned long number2 = 1;
	unsigned long follow;
	int i;

	for (i = 0; i < 98; i++)
	{
		follow = number1 + number2;
		number1 = number2;
		number2 = follow;
		if (i < 97)
			printf("%lu, ", follow);
		else
			printf("%lu", follow);
	}
	printf("\n");
	return (0);
}
