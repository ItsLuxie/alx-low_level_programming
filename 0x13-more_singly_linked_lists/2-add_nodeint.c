#include "lists.h"
#include <stdlib.h>
#include <stdlib.h>
/**
* add_nodeint - function that adds new nodes to the list
* @head: current location in the list
* @n: data value
* Return: pointer to current position in list
**/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = *head;
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;
	return (*head);
}
