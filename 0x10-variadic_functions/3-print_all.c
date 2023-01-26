#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/** Function Prototypes */
void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);

/**
 * print_char - Prints a char to stdout
 * @arg: A list of arguments pointing to the character to be printed.
 */
void print_char(va_list arg)
{
	char c;

	c = va_arg(arg, int);
	printf("%c", c);
}

/**
 * print_int - Prints an integer to stdout
 * @arg: A list of arguments pointing to the integer to be printed.
 */
void print_int(va_list arg)
{
	int i;

	i = va_arg(arg, int);
	printf("%d", i);
}

/**
 * print_float - Prints a float to stdout
 * @arg: A list of arguments pointing to the float to be printed.
 */
void print_float(va_list arg)
{
	float f;

	f = va_arg(arg, double);
	printf("%f", f);
}

/**
 * print_string - Prints a string to stdout
 * @arg: A list of arguments pointing to the string to be printed.
 */
void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}

/**
 * print_all - Prints any data type to stdout.
 * @format: A string of characters representing the argument types.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *separator = "";
	printer_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);

	while (format && (*(format + i)))
	{
		j = 0;

		while (j < 4 && (*(format + i) != *(funcs[j].symbol)))
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print(args);
			separator = ", ";
		}

		i++;
	}

	printf("\n");

	va_end(args);
}
