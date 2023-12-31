#include "main.h"
#include <stdio.h>
/**
* set_bit - function that sets bit at index to 1
* @n: points to number
* @index: index to change
* Return: 1 on success, -1 on failure
**/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (8 * sizeof(*n)) - 1)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
