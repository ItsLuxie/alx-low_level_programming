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
		printf("nil\n");
	if ((*d).age == 0)
		printf("nil\n");
	if ((*d).owner == 0)
		printf("nil\n");
}
