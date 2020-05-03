#include "lists.h"

/**
 * print_dlistint - function that
 * prints all the elements of a doubly linked list dlist_t.
 * @h: pointer to the head of the list
 * Return: size_t return the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
