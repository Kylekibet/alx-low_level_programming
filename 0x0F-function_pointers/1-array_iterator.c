#include "function_pointers.h"

/**
 * array_iterator - print items in an array
 * @array: array to print
 * @size: size of the array
 * @action: function to modify item in array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
