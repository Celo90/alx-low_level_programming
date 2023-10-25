#include "lists.h"

/**
 * list_len - returns the length of a linked list
 * @h: head node
 * Return: number of elements in h
 */

size_t list_len(const list_t *h)
{
	size_t j = 0;

	while (h != NULL)
	{
		j++;
	h = h->next;
	}
	return (j);
}
