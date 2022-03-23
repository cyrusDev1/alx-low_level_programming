#include "main.h"

/**
 * cap_string - capitalize the string
 * @str: parameter
 * Return: return capitalize string
 */

char *cap_string(char *str)
{
	int i, j;
	char separate = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	while (str[i])
	{
		for (j = 0; j < 13; j++)
		{
			if (str[i] == separate[j])
			{
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				{
					str[i + 1] -= 32;
				}
			}
		}
		i++;
	}
	return (str);
}
