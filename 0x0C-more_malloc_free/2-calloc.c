#include <stdio.h>
#include  "main.h"
#include <stdlib.h>
/**
 * _calloc - alllocates mem for an array
 * @nmemb: size of array
 * @size: array elements
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptrarr;
	char *arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptrarr = malloc(size * nmemb);

	if (ptrarr == NULL)
		return (NULL);

	arr = ptrarr;

	for (i = 0; i < (size * nmemb); i++)
		arr[i] = '\0';

	return (arr);
}
