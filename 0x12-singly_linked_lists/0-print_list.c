#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
* print_list - function that prints all elements of a list_t list
* @h: singly linked list to print
* Return: number of nodes in the list
*/
size_t print_list(const list_t *h)
{
	size_t i = 1;


	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		i += 1;
	}


	printf("[%d] %s\n", h->len, h->str);

	return (i);
}
