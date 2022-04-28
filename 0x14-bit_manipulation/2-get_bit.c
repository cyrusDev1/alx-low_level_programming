#include "main.h"

/**
 * get_bit - returns value of a bit at given index
 * @n: number
 * @index: index
 * Return: bit value or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int data;

	if (index > 64)
		return (-1);
	data = (n >> index) & 1;
	return (data);
}
