#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: first parameter
 * @b: second parameter
 * @n: third parameter
 * Return: return s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
	{
		*p++ = b;
	}
	return (s);
}
