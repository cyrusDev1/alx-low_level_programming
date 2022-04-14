#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: first param
 * @n: second param
 * Return: no return
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int j;
	va_list ap;
	char *str;

	va_start(ap, n);
	for (j = 0; j < n; j++)
	{
		str = va_arg(ap, char *);
		if (str == NULL)
			str = "(nil)";
		if (separator == NULL)
		{
			printf("%s", str);
		}
		else if (separator != NULL && j == 0)
		{
			printf("%s", str);
		}
		else
		{
			printf("%s%s", separator, str);
		}
	}
	printf("\n");
	va_end(ap);
}
