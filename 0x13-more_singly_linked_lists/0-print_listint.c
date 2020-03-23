#include "lists.h"

/**
 * print_listint - function that prints
 * the elements of a list of intigers listint_t.
 * @h: pointer to the head of the list.
 * Return: number of nodes size_t.
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
