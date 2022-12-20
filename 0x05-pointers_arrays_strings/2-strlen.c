#include "main.h"

/**
 * _strlen - get lenth of a string
 * @s: string to get lenth
 * Return: Lenght of string
 */
int _strlen(char *s)
{
	int x = 0;

	while (s[x] != '\0')
		x++;
	return (x);
}
