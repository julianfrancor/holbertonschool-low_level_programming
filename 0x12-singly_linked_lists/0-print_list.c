#include "lists.h"

/**
 * print_list - function that
 * prints all the elements of a list_t list.
 * @h: pointer to the head of the list
 * Return: size_t return the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("[%u] ", h->len);
		if (h->str == NULL)
		{
			printf("(nill)\n");
		}
		else
		{
			printf("%s\n", h->str);
		}
		h = h->next;
		nodes++;
	}
	return (nodes);
}
