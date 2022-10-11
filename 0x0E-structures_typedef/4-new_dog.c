#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog
 * Return: Pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int nl, ol, i;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return  (NULL);
	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	for (nl = 0; name[nl]; nl++)
		;
	n1++;
	dog->name = malloc(n1 * sizeof(char));

	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < n1; i++)
		dog->name[i] = name[i];

	dog->age = age;
	for (ol = 0; owner[ol]; ol++)
		;
	o1++;

	dog->owner = malloc(ol * sizeof(char));

	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0, i < o1; i++)
		dog->owner[i] = owner[i];

	return (dog);
}
