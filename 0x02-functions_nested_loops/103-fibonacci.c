#include <stdio.h>
#include <stdlib.h>

/**
 * main - finds and prints the sum of the even-valued terms,
 * followed by a new line.
 * Return: return 0
 */

int main(void)
{
	unsigned long nbr1 = 0, nbr2 = 1, follow, sum;

	while (follow < 4000000)
	{	
		follow = nbr1 + nbr2;
		nbr1 = nbr2;
		nbr2 = follow;
		if ((nbr1 % 2) == 0)
			sum += nbr1;
	}
	printf("%ld\n", sum);
	return (0);
}
