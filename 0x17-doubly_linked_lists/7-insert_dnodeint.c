#include "lists.h"

/**
 * insert_dnodeint_at_index -  function that inserts a new
 * node at a given position.
 * @h: is a pointer to the h of the list
 * @idx: index of the list where the new node will be added.
 * @n: is the number to be added within the new node.
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *aux_runner, *new_node;
	unsigned int nodes = 0, i = 0;

	nodes = dlistint_len(*h);
	if ((idx > nodes) || (*h == NULL && idx != 0))
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	aux_runner = *h;

/*index in first position*/
	if (idx == 0)
		return (add_dnodeint(h, n));
/*index in last position*/
	else if (idx == nodes)
		return (add_dnodeint_end(h, n));
/*index in the a middle posiition*/
	else if (idx < nodes)
	{
		i = 0;
		while (i < (idx - 1))
		{
			aux_runner = aux_runner->next;
			i++;
		}
		new_node->next = aux_runner->next;
		aux_runner->next->prev = new_node;
		aux_runner->next = new_node;
		new_node->prev = aux_runner;
		return (new_node);
	}
	free(new_node);
	return (NULL);
}


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
