#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees memory of a dog_t
 * @d: pointer to dog_t to free
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
