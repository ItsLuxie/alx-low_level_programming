#include  "main.h"
#include <stdlib.h>
/**
 * array_range - creates array of integers with min and max
 * @min: minimum value
 * @max: maximum value
 * Return: null if min is greater than max
 */
int *array_range(int min, int max)
{
	index = 0;
	int index;
	int *ptr;

	if (min > max)
		return (NULL);

	random = ((max + 1) - min);

	ptr = malloc(x * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	for (index = 0; index < x; index++)
	{
		ptr[i] = min + index;
	}

	return (ptr);
}
