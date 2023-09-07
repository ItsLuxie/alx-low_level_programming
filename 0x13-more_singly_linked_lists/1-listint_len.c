#include "lists.h"
#include <stdio.h>

/**
* listint_len - function that prints all elements of a list
* @h: list to print
* Return: number of nodes in the list
**/
size_t listint_len(const listint_t *h)
{
	size_t noofnodes;

	for (noofnodes = 0; h; noofnodes++)
	{
		h = h->next;
	}
	return (noofnodes);
}
