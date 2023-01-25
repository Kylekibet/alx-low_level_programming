#include "function_pointers.h"

/**
 * print_name - pass name to a function modifier
 * @f: function to modify name
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL && f == NULL)
		return;
	f(name);
}
