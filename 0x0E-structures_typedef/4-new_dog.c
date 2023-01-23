#include "dog.h"

/**
 * new_dog - creates a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: the owner of the dog
 *
 * Return: NULL or dog details
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;

	return (d);
}
