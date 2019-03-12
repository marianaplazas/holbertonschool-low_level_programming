#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - be free little pupi
 * @d: pointer to the struct
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
