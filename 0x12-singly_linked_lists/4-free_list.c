#include <stdlib.h>
#include "lists.h"
/**
 * free_list - free up space
 * @head: first node
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *first = head;
	list_t *node;

	while (first != NULL)
	{
		node = first->next;
		free(first->str);
		free(first);
		first = node;
	}
}
