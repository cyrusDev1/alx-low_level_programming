#include "3-calc.h"

/**
 * main - performs simple operations
 * @argc: size of array
 * @argv: number of array
 * Return: return result of operations
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;
	char c;
	char d;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	c = *argv[2];
	d = *argv[3];

	if ((c == '/' || c == '%') && d == '0')
	{
		printf("Error\n");
		exit(100);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	result = get_op_func(argv[2])(num1, num2);
	printf("%d\n", result);

	return (0);
}
