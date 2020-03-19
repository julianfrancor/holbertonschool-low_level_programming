#include "lists.h"

/**
 * list_len - function that
 * returns the number of elements in a linked list_t list.
 * @h: pointer to the head of the list
 * Return: size_t return the number of elements in the list.
 */
size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
		nodes++;
		}
		h = h->next;
	}
	return (nodes);
}
