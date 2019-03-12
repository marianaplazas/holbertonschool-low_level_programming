#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - print the dog's data hello dog :)
 * @d: pointer to the struct
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: ");
		(d->name == NULL) ? printf("(nil)\n") : printf("%s\n", d->name);
		printf("Age: %.6f\n", d->age);
		printf("Owner: ");
		(d->owner == NULL) ? printf("%p\n", d->owner) : printf("%s\n", d->owner);
	}
}
