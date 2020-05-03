#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node
 * of a dlistint_t linked list.
 * @head: double pointer to the head of the list
 * @index: is the index of the node, starting from 0.
 * Return: the address of the new element, or NULL if the node doesn't exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *aux_runner;
	unsigned int nodes = 0, i = 0;


	if (head == NULL)
		return (NULL);

	aux_runner = head;
	while (aux_runner)
	{
		aux_runner = aux_runner->next;
		nodes++;
	}
	if (index <= nodes)
	{
		aux_runner = head;
		i = 0;
		while (i < index)
		{
			aux_runner = aux_runner->next;
			i++;
		}
		return (aux_runner);
	}
	else if (index > nodes)
		return (NULL);

	return (aux_runner);
}
