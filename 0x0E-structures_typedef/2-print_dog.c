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
	if (d == NULL)
		return;
	if ((*d).name == NULL)
		printf("Name: (nil)\n");
	if ((*d).age == 0)
		printf("Age: 0.000000\n");
	if ((*d).owner == NULL)
		printf("Owner: (nil)\n");

	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
