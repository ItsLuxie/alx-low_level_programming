#include  "main.h"
#include <stdlib.h>
/**
 * array_range - creates array of int min&max
 * @min: minimum value
 * @max: maximum value
 * Return: null if min is greater than max
 */
int *array_range(int min, int max)
{
	int index = 0;
	int x;
	int *ptr;

	if (min > max)
		return (NULL);

	x = ((max + 1) - min);

	ptr = malloc(x * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	for (index = 0; index < x; index++)
	{
		ptr[index] = min + index;
	}

	return (ptr);
}
