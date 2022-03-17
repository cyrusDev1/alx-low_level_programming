#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the largest prime factor of the number
 * Return: return 0
 */

int main(void)
{
	long int n = 612852475143, div = 2, max;

	while (n != 0)
	{
		if (n % div != 0)
		{
			div = div + 1;
		}
		else
		{
			max = n;
			n = n / div;
			if (n == 1)
			{
				printf("%ld\n", max);
				break;
			}
		}
	}
	return (0);
}
