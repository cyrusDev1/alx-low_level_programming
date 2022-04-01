#include "main.h"
#include <stddef.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: first parameter
 * @accept: second param
 * Return: return lengtn
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				len++;
				break;
			}else if (accept[i + 1] == '\0')
			{
				return (len);
			}
		}
		s++;
	}
	return (len);
}
