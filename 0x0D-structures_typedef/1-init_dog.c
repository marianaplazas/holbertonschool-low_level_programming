#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - acsses to the dog's data
 * @d: pointer to the structure
 * @name: name of the dog
 * @age: dog's age
 * @owner: name of the owner
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
