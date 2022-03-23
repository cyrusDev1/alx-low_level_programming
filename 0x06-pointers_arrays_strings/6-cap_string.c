#include "main.h"

/**
 * cap_string - capitalize the string
 * @str: parameter
 * Return: return capitalize string
 */

char *cap_string(char *str)
{
	int i = 0, j;
	char separate[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	while (str[i])
	{
		if (i == 0 && str[i] >= 'a' && str[j] <= 'z')
			str[i] -= 32;
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
