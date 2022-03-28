#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: first parameter
 * @src: second parameter
 * @n: third parameter
 * Return: return dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *pDest = dest;
	char *pSrc = src;

	while (n)
	{
		*(pDest++) = *(pSrc++);
		n--;
	}
	return (dest);
}
