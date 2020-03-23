#include "lists.h"

/**
 * listint_len - function that returns
 * the numbers of elements in a linked list listint_t.
 * @h: pointer to the head of the list.
 * Return: number of nodes size_t.
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
