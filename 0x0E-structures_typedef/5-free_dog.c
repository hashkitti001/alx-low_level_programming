#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - name of function
 * @d: Structure instance
 * Return: void
*/

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
