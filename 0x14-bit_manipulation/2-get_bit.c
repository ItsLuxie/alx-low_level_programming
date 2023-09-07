#include "main.h"
#include <stdio.h>
/**
* set_bit - function that gets the value of int at index
* @n: pointer
* @index: index to change
* Return: 1 on success, -1 on failure
**/
int get_bit(unsigned long int n, unsigned int index)
{
	int value, b;

	if (index > (sizeof(unsigned long int) * 8))
	return (-1);

	b = n >> index;

	value = b & 1;

	return (value);
}
