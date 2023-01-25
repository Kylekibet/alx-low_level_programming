#include "function_pointers.h"

/**
 * int_index - used to search for an integer
 * @array: array to search for the integer
 * @size: length of the array
 * @cmp: function to compare with item in array
 *
 * Return: index of the item or -1 if not found
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
		if (cmp(array[i]) != 0)
			return (i);

	return (-1);
}
