#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @s: first parameter
 * @c: second parameter
 * Return: return c or NULL
 */

char *_strchr(char *s, char c)
{
	int;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}
