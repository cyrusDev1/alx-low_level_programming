#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: first param
 * @n: second param
 * Return: no return
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int j;
	int i;
	va_list ap;

	va_start(ap, n);
	for (j = n; j; j--)
	{
		i = va_arg(ap, int);
		if (j == 1)
		{
			printf("%d\n", i);
		}
		else
		{
			if (separator == NULL)
				printf("%d", i);
			else
				printf("%d%s", i, separator);
		}
	}
	va_end(ap);
}
