#include  <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - a pointer to be retuned
 * @size: an unsigned int showing the size
 * @c: array of characters
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *pt;
	/* pt is for the pointer*/
	if (size == 0)
	{
		return (NULL);
	}
	pt = malloc(sizeof(char) * size);
	if (pt == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		pt[i] = c;
	}
	return (pt);
}
