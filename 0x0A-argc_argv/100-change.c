#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the number
 * @argc: number of arg
 * @argv: array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int cents = 0;
	int sum = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	while (cents > 0)
	{
		sum++;
		if ((cents -25) >= 0)
		{
			cents -= 25;
		}
		if ((cents - 10) >= 0)
		{
			cents -= 10;
			continue;
		}
		if ((cents - 5) >= 0)
		{
			cents -= 5;
			continue;
		}
		if ((cents - 2) >= 0)
		{
			cents -= 2;
			continue;
		}
		cents--;
	}
	printf("%d\n", sum);
	return (0);
}