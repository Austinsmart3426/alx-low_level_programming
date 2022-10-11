#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - A functiin that Frees dogs.
 * @d: The dog in question
 */
	void free_dog(dog_t *d)
{
	if (d == NULL)
	return;

	free(d->owner);
	free(d->name);
	free(d);
}
