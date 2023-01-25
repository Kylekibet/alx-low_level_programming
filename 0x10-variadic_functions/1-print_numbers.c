#include "variadic_functions.h"

/**
 * print_numbers - print numbers to stdout separating with separator.
 * @separator: used to separate numbers
 * @n: number of integers passed
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (n != i + 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(ap);

	printf("\n");
}
