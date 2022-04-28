#include "main.h"

/**
 * binary_to_int - convert binary to unsigned int
 * @b: char
 * Return: number convert or 0
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int data = 0;
	unsigned int len = 0;
	unsigned int k = 1;

	if (b == NULL)
		return (0);
	while (b[len] != '\0')
		len++;
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}
	while (len)
	{
		data += (k * (b[len - 1] - '0'));
		k *= 2;
		len--;
	}
	return (data);
}
