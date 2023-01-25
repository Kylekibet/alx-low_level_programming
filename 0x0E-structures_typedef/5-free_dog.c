#include "dog.h"

/**
 * free_dog - releases space created by malloc
 * @d: dog details to release
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
