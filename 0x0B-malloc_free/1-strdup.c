#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *_strdup - creates a duplicate of a string provided
 * @str: string to create duplicate
 *
 * Return: NULL if @str is NULL or pointer to dupliated string
 */
char *_strdup(char *str)
{
	char *dupStr;
	int size, increment;

	size = strlen(str);
	dupStr = malloc(sizeof(char) * size);
	if (str == NULL || dupStr == NULL)
		return (NULL);

	for (increment = 0; increment < size; increment++)
	{
		dupStr[increment] = str[increment];
	}
	dupStr[increment + 1] = '\0';

	return (dupStr);
}
