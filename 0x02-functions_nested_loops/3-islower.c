#include "main.h"

/**
 * _islower - checks if number provided is lowercase
 * @c: number to be checked
 * Return: output 1 if @c is lowercase otherwise 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
