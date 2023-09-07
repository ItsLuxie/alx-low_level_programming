#include "lists.h"
#include <stdio.h>

/**
* print_listint - function that prints all elements of a list
* @h: list to print
* Return: number of nodes in the list
**/
size_t print_listint(const listint_t *h)
{
	size_t noofnodes;

	for (noofnodes = 0; h; noofnodes++)
	{
		h = h->next;
	}
	return (noofnodes);
}
