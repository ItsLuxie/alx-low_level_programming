#include  "dog.h"
#include <string.h>
#include <stdio.h>
/**
 * print_dog - entry point
 * @d: pointer to struct dog
 * Return: void
 */
void print_dog(struct dog *d)
{
	if ((*d).name == 0)
		printf("Name: (nil)\n");
	if ((*d).age == 0)
		printf("Age: (nil)\n");
	if ((*d).owner == 0)
		printf("Owner: (nil)\n");
	else if (d != 0)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
