#include "main.h"

/**
 * is_prime_number - prime number
 * @n: parameter
 * Return: returns 1 if the input integer is a prime number, otherwise return 0
 */

int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);
	if (n >= 2 && n <= 3)
		return (1);
	return (is_divis(n, div));
}

/**
 * is_divis - checs if number is divisible
 * @num: the number to checked
 * @div: the divisor
 * Return: return 0 if number is divisible
 * return -1 isif is not divisible
 */

int is_divis(int num, int div)
{
	if (num % div == 0)
		return (0);

	if (div == num / 2)
		return (1);
	return (is_divis(num, div + 1));
}
