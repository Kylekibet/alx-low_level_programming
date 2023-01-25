#include "variadic_functions.h"

/**
 * print_strings - print strings separated by a separator
 * @separator: used to separate strings
 * @n: number of strings provided
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);
		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");
		if (separator != NULL && i + 1 != n)
			printf("%s", separator);
	}
	printf("\n");
}
