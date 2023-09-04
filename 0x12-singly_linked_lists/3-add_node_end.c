#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * add_node_end - add nodes at the end
 * @head: pointer to a pointer
 * @str: pointer to the string
 *
 * Return: new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nnode;
	list_t *first;

	if (str == NULL)
		return (NULL);

	nnode = (list_t *)malloc(sizeof(list_t));

	if (nnode == NULL)
		return (NULL);
	nnode->str = strdup(str);
	nnode->len = strlen(str);
	nnode->next = NULL;

	first = *head;
	if (*head == NULL)
	{
		*head = nnode;
	}
	else
	{
		while (first->next)
		{
			first = first->next;
		}
		first->next = nnode;
	}
	return (nnode);
}
