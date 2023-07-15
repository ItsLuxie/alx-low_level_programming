#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - allocate mem using malloc
 * @b: size of the memory block to be allocated
 * Return: return pointer to the allocated mem
 */
void *malloc_checked(unsigned int b)
{
	int *c;

	c = malloc(b);

	if (c == NULL)
	{
		exit(98);
	}

	return (c);
}
