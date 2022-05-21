#ifndef STRUCTURES
#define STRUCTURES
/**
 * struct dog - structure defining a dog.
 * @name: name of the dog.
 * @owner: owner of the dog.
 * @age: age of the dog.
 *
 * Description: Properties of the dog include its
 * name, its owner's name and its age.
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
