#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: string to be searched
 * @accept: string to be used
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		if (_strchr(accept, *s) != NULL)
			return (s);
		s++;
	}
	return (NULL);
}

/**
 * _strchr - locates a char in a string
 * @s: string to be searched
 * @c: char to be checked
 *
 * Return: pointer to the first occurence of c in s
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}
