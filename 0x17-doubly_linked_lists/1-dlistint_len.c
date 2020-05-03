#include "lists.h"

/**
 * dlistint_len - function that
 * returns the number of elements in a doubly linked list dlist_t.
 * @h: pointer to the head of the list
 * Return: size_t return the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
