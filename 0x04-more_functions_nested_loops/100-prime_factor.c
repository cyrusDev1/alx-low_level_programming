#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the largest prime factor of the number
 *
 * Return: 0;
 */

int main(void)
{
	long int n;
	long int div = 2, max;
	n = 612852475143;

	while (n != 0)
	{
		if (n % div != 0)
			div = div + 1;
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
