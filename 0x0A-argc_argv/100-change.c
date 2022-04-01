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
	int sum = 0, nb1, nb2, nb10, nb25, nb5;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}else if (atoi(argv[1]) < 0)
	{
		printf("0\n");
	}else
	{
		cents = atoi(argv[1]);
		nb25 = cents / 25;
		nb10 = (cents % 25) / 10;
		nb5 = (cents % 10) / 5;
		nb2 = (cents % 5) / 2;
		nb1 = (cents % 5) % 2;
		sum = nb25 + nb10 + nb5 + nb2 + nb1;
		printf("%d\n", sum);
	}
	return (0);
}
