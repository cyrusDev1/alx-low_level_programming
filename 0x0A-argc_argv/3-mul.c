#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the mul
 * @argc: number of argc
 * @argv: array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if ((argc - 1) != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	return (0);
}
