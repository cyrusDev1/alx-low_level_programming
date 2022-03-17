#include "main.h"

/**
 * _isdigit - check a digit
 * @c: digit to check
 * Return: return 0 or 1
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
