#include <stdio.h>

/**
 * main: print number of arg
 * @argc: number
 * @argv: array
 * Return: 0
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
