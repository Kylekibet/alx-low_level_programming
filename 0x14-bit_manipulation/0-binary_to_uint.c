#include "main.h"

/**
  * binary_to_uint - converts binary to int
  * @b: char to convert to int
  *
  * Return: conveted number or 0 if failed
  */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int number = 0;

	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		number = 2 * number + (b[i] - '0');
	}

	return (number);
}
