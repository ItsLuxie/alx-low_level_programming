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
		d->name = "(nil)";
	if ((*d).age == 0)
		d->age = 0.000000;
	if ((*d).owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
