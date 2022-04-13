#include "function_pointers.h"

/**
 * main - print opcode
 * @argc: number of elements
 * @argv: array
 * Return: return 0
 */

int main(int argc, char *argv[])
{
	int i = 0, number_of_bytes;
	unsigned char *array;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	number_of_bytes = atoi(argv[1]);

	if (number_of_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	array = (unsigned char *)main;

	for (i = 0; i < number_of_bytes; i++)
	{
		if (i == number_of_bytes - 1)
			printf("%02x\n", array[i]);
		else
			printf("%02x ", array[i]);
	}
	return (0);
}
