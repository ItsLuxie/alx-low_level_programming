#ifndef STDIO_H
#define STDIO_H
#include "dog.h"
/**
 * init_dog - dog of type void
 * @d: poinyer to struct dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
#endif
