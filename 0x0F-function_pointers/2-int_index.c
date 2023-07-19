#include "function_pointers.h"
/**
 *int_index -searches for index
 *@array: array itself
 *@size: size of array
 *@cmp: pointer to function of type int
 *Return: 0 or 1 or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x = 0;

	if (size <= 0 || !(array) || !(cmp))
		return (-1);
	while (x < size)
	{
		if (cmp(array[x]))
		{
			return (x);
		}
		x++;
	}
	return (-1);
}
