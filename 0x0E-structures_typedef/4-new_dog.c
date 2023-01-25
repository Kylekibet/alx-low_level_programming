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
	if (name == NULL || age < 0 || owner == NULL)
		return(NULL);

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = malloc(sizeof(char) *(strlen(name) + 1));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	d->owner = malloc(sizeof(char) * (strlen(name) + 1));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	d->name = strcpy(d->name, name);
	d->age = age;
	d->owner = strcpy(d->owner, owner;

	return (d);
}
