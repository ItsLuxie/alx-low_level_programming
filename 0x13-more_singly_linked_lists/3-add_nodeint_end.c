#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
* add_nodeint_end - function that adds new nodes to the end of the list
* @head: current location in the list
* @n: data vale
* Return: points to current position in list
**/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *firstNode, *lastNode;

	if (n == NULL)
		return (NULL);
	firstNode = malloc(sizeof(listint_t));

	if (firstNode == NULL)
		return (NULL);
	firstNode->n = n;
	firstNode->next = NULL;
	lastNode = *head;
	if (*head == NULL)
		*head = firstNode;
	else
	{
		while (lastNode->next)
		{
			lastNode = lastNode->next;
		}
		lastNode->next = firstNode;
	}
	return (*head);
}
