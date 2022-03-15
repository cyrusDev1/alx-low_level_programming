#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: contain integer to abs
 * Return: return n
 */

int _abs(int n)
{
	if (n > 0)
		return (n);
	else if (n < 0)
		return (-n);
	else
		return (0);
}	
