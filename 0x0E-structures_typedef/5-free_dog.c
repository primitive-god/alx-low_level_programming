#include <stdlib.h>
#include "dog.h"
#include "main.h"
/**
 *   * free_dog - ...
 *     * @d: ...
 *       *
 *         * Return: ...
 *           */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
