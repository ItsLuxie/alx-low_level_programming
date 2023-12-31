#include "main.h"
/**
* clear_bit - function that sets a bit at index to zero
* @n: pointer
* @index: index to change
* Return: 1 on success, -1 on failure
**/
int clear_bit(unsigned long int *n, unsigned int index)
{
	*n = *n & ~(1 << index);
	return ((index > 8 * sizeof(*n)) ? -1 : 1);
}
