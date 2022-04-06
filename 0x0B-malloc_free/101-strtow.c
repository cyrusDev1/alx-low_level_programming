#include "main.h"

/**
 * count - counts number of word
 * @s: string
 * Return: number of word
 */

int count(char *s)
{
	int w = 0, i, check = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
		{
			check = 0;
		}
		else if (check == 0)
		{
			check = 1;
			w++;
		}
	}
	return (w);
}

/**
 * strtow - splits a string into word
 * @str: string
 * Return: return null or words
 */

char **strtow(char *str)
{
	char **word, *tmp;
	int i, k = 0, len = 0, words, c = 0, start, end;

	for (i = 0; str[i]; i++)
	{
		len++;
	}
	words = count(str);
	word = (char **) malloc(sizeof(char *) * (words + 1));
	if (word == NULL || words == 0)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				word[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}
	word[k] = NULL;
	return (word);
}
