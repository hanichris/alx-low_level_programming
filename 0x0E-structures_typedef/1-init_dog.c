#include "dog.h"
/**
 * init_dog - initialize dog struct.
 * @d: pointer to dog struct.
 * @name: pointer to char name of dog.
 * @age: age of dog.
 * @owner: pointer to char name of dog owner.
 * Return : void.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
