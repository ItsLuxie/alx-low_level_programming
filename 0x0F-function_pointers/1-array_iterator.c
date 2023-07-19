#include "function_pointers.h"
/**
 * array_iterator - function ro give parameter
 * @array: the array
 * @size: size of the array
 * @action: pointer to functionof type char
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != 0 && size > 0 && action != 0)
		for (i = 0; i < size; i++)
			action(array[i]);
}
