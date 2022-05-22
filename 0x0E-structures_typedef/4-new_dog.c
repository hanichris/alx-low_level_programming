#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _strlen - compute the length of a string.
 * @str: pointer to string.
 * Return: length of string.
 */
int _strlen(char *str)
{
	int iter = 0;
	int len = 0;

	while (str[iter])
	{
		len++;
		iter++;
	}
	return (len);
}

/**
 * _strcpy - copy contents from source string to destination string.
 * @src : pointer to source string.
 * @dest : pointer to destination string.
 * Return: NULL or pointer to destination string.
 */
char *_strcpy(char *dest, char *src)
{
	int iter = 0;

	while (src[iter])
	{
		dest[iter] = src[iter];
		iter++;
	}
	dest[iter] = '\0';
	return (dest);
}

/**
 * new_dog - create new data structure for dog.
 * @name: name of dog.
 * @age: age of dog.
 * @owner: dog owner.
 * Return: Pointer to new dog
 **/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int name_len, owner_len;

	if (!name || !owner)
		return (NULL);
	new_dog = malloc(sizeof(dog_t));
	if (!new_dog)
		return (NULL);
	name_len = _strlen(name);
	new_dog->name = malloc(sizeof(char) * name_len + 1);
	if (!new_dog->name)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->name = _strcpy(new_dog->name, name);
	owner_len = _strlen(owner);
	new_dog->owner = malloc(sizeof(char) * owner_len + 1);
	if (!new_dog->owner)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = _strcpy(new_dog->owner, owner);
	new_dog->age = age;
	return (new_dog);
}
