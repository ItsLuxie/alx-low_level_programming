#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	struct dog my_dog;

	my_dog.name = "ma";
	my_dog.age = 19;
	my_dog.owner = "lu";
	print_dog(&my_dog);
	return (0);
}
