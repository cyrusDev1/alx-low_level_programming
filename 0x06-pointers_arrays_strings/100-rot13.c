#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: parameter
 * Return: return rot13 encode
 */

char *rot13(char *str)
{
	char first_alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char second_alpha[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i;
	int j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == first_alpha[j])
			{
				str[i] = second_alpha[j];
				break;
			}
		}
	}
	return (str);
}
