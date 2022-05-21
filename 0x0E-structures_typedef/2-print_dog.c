#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print out the structure of dog in a formatted manner.
 * @d: pointer to a struct dog.
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (!d)
		return;
	if (d->name && d->age && d->owner)
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	else
	{
		if (!d->name)
			printf("Name: (nil)\nAge: %f\nOwner: %s\n", d->age, d->owner);
		if (!d->age)
			printf("Name: %s\nAge: (nil)\nOwner: %s\n", d->name, d->owner);
		if (!d->owner)
			printf("Name: %s\nAge: %f\nOwner: (nil)\n", d->name, d->age);
	}
}
