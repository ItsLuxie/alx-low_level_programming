#include "lists.h"

/**
 * list_len - Entry point
 * Description: returns the number of elements in a linked list_t list.
 * @h: pointer to the first node
 * Return: count of elements
 **/
size_t list_len(const list_t *h)
{
	size_t count = 1;

	if (h != NULL)
	{
		if (h->next != NULL)
		{
			h = h->next;
			count++;
		}
		return (count);
	}
	return (count);
}
