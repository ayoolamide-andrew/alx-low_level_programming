#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog
 * Return: Pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, name_size, owner_size;
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		return (NULL);
	}

	name_size = sizeof(name) + 1;
	owner_size = sizeof(owner) + 1;
	new_dog->name = malloc(name_size);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
		new_dog->name[i] = name[i];
	new_dog->name[i] = '\0';

	new_dog->age = age;

	new_dog->owner = malloc(owner_size);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	for (i = 0; owner[i] != '\0'; i++)
		new_dog->owner[i] = owner[i];
	new_dog->owner[i] = '\0';

	return (new_dog);
}
