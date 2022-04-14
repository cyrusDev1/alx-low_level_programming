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

	if (n == 0)
		return;

	va_start(ap, n);
	for (j = n; j; j--)
	{
		i = va_arg(ap, int);
		if (separator == NULL)
		{
			printf("%d", i);
		}
		else if (separator != NULL && j == 1)
		{
			printf("%d", i);
		}
		else
		{	
			printf("%d%s", i, separator);
		}
	}
	printf("\n");
	va_end(ap);
}
