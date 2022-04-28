#include "main.h"

/**
 * flip_bits - number of bits you need to flip to get from
 * one number to another
 * @n: first numeber
 * @m: second number
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flips;
	unsigned int count = 0, i;

	flips = n ^ m;
	for (i = 0; i < 64; i++)
	{
		if (flips & 1)
			count++;
		flips >>= 1;
	}
	return (count);
}
