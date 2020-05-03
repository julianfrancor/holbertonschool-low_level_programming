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

	if (*h == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
/*let's find out how many nodes we have*/
	aux_runner = *h;
	while (aux_runner)
	{
		aux_runner = aux_runner->next;
		nodes++;
	}
	if (idx > nodes)
	{
		free (new_node);
		return (NULL);
	}
	aux_runner = *h;
	if (idx == 0)
	{

		new_node->next = *h;
		aux_runner->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	else if (idx < nodes)
	{
		i = 0;
		while (i < idx)
		{
			aux_runner = aux_runner->next;
			i++;
		}
		new_node->prev = aux_runner;
		new_node->next = aux_runner->next;
		aux_runner->next = new_node;
		new_node->next->prev = new_node;
		return (new_node);
	}
	free (new_node);
	return (NULL);
}
