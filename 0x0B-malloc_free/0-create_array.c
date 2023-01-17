#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates a array of given size and initializes it with
 * given characher
 * @size: size of the array
 * @c: char to initialize the array with
 *
 * Return: NULL if size is 0 or if it fails
 * or pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int increment;

	if (size <= 0)
		return (NULL);

	arr = malloc(sizeof(arr) * size);
	if (arr == NULL)
		return (NULL);

	for (increment = 0; increment < size; increment++)
	{
		arr[increment] = c;
	}
	arr[increment + 1] = '\0';

	return (arr);
}
