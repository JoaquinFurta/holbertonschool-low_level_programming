#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - initalaized the dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
	{
		return (NULL);
	}

	dog->name = malloc(strlen(name) + 1);

	if (dog->name == NULL)
	{

		free(dog);
		return (NULL);

	}

	dog->name = strcpy(dog->name, name);

	dog->age = age;

	dog->owner = malloc(strlen(owner) + 1);

	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->owner = strcpy(dog->owner, owner);

	return (dog);
}
