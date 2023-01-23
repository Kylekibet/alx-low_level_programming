#include "dog.h"

/**
 * free_dog - releases space created by malloc
 * @d: dog details to release
 */

void free_dog(dog_t *d)
{
	free(d);
}
