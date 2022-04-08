#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiplies two positive numbers
 * @num1: first param
 * @num2: second param
 * Return: number multplie
 */

int main(int argc, char *argv[])
{
	if (!(is_digit(argv[1])) || !(is_digit(argv[2])) || argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	print_result(_atoi(argv[1]) * _atoi(argv[2]));
	return (0);
}

/**
 * is_digit - checks if string is didit
 * @s: string to check
 * Return: 0 or 1
 */

int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
	}
	return (1);
}

/**
 * _atoi - lenth of the string
 * @s: string
 * Return: return the lenth of the string
 */

int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	unsigned int number = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			sign = -sign;
		else if (s[i] >= '0' && s[i] <= '9')
			number *= 10 + (s[i] - '0');
		else if (number > 0)
			break;
	}
	return (sign * number);
}

/**
 * _print_result - prints an integer
 * @n: integer to print
 * Return: noreturn
 */

void print_result(int n)
{
	unsigned int number = n;

	if (n < 0)
	{
		_putchar('-');
		number = -number;
	}
	if ((number / 10) > 0)
		print_result(number / 10);
	_putchar((number % 10) + '0');

}
