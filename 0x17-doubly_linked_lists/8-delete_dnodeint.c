#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes the node
 * at index index of a dlistint_t linked list.
 * @head: is a pointer to the h of the list
 * @index: index of the list where the new node will be added.
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *aux;
	unsigned int nodes = 0, i = 0;

	nodes = dlistint_len(*head);
	if ((index > nodes) || (*head == NULL && index != 0))
		return (-1);
	if (*head == NULL || head == NULL)
		return (-1);
	aux = *head;
	while (i < index)
	{
		if (aux == NULL)
			return (-1);
		aux = aux->next;
		i++;
	}
/*when there is just one node in the list, and it'll be deleted*/
	if (aux->prev)
		aux->prev->next =  aux->next;
/*when the list has multiple nodes*/
	else if (aux->next)
		*head = aux->next;
	else
		*head = NULL;

	if (aux->next)
	aux->next->prev = aux->prev;

	free(aux);
	return (1);
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
