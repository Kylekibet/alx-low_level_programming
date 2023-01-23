#include "dog.h"

/**
 * free_dog - releases space created by malloc
 * @dog_t: dog details to release
 */

void free_dog(dog_t *d)
{
	free(d);
}
