#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - new dog
 * @name: dog name
 * @age: dog's age
 * @owner: dog's owner
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0, j = 0, k;
	dog_t *ndog;

	while (name[i] != '\0')
		i++;
	while (owner[j] != '\0')
		j++;
	ndog = malloc(sizeof(dog_t));

	if (ndog == NULL)
	{
		free(ndog);
		return (NULL);
	}
	ndog->name = malloc(i * sizeof(ndog->name));
	if ((*ndog).name == 0)
	{
		free(ndog->name);
		free(ndog);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
		ndog->name[i] = name[i];
	ndog->age = age;
	ndog->owner = malloc(j * sizeof(ndog->owner));
	if ((*ndog).owner == 0)
	{
		free(ndog->owner);
		free(ndog);
		return (NULL);
	}
	for (k = 0; k <= j; k++)
		ndog->owner[k] = owner[k];
	return (ndog);
}

