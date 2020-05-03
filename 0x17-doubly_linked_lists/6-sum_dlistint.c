#include "lists.h"

/**
 * sum_dlistint- function that
 * returns the sum of all the data (n) of a
 * doubly linked list dlist_t.
 * @head: pointer to the head of the list
 * Return: returns the sum or if the list is
 * empty, return 0
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *aux_runner;
	int sum_nodes = 0;


	if (head == NULL)
		return (0);

	aux_runner = head;
	while (aux_runner)
	{
		sum_nodes += aux_runner->n;
		aux_runner = aux_runner->next;
	}

	return (sum_nodes);
}
