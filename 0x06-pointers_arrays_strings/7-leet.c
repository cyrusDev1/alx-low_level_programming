#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: parameter
 * Return: return 1337 string
 */

char *leet(char *s)
{
	char *english = "aAeEoOtTlL";
	char *leet = "4433007711";
	int i = 0, j = 0;

	while (s[i])
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == english[j])
			{
				s[i] = leet[j];
			}
		}
		i++;
	}
	return (s);
}
