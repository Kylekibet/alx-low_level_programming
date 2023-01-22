#include "dog.h"


/**
 * init_dog - initializes dog to given details
 * @d: dog struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: the owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
