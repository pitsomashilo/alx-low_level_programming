#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes a variable type struct dog
 * @d: dog
 * @name: string - name of dog
 * @age: float - dog's age
 * @owner: string - owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/*struct dog *d; */

	d->name = name;
	d->age = age;
	d->owner = owner;
}
