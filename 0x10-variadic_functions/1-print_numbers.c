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
	for (j = 0; j < n; j++)
	{
		i = va_arg(ap, int);
		if (separator == NULL)
		{
			printf("%d", i);
		}
		else if (separator != NULL && j == 0)
		{
			printf("%d", i);
		}
		else
		{
			printf("%s%d", separator, i);
		}
	}
	printf("\n");
	va_end(ap);
}
