#include "lists.h"

/**
 * add_dnodeint - function that
 * adds a new node at the beginning of a doubly linked list dlist_t.
 * @head: double pointer to the head of the list
 * @n: constant int which is the payload (data) in the new node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *first_node;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

/* Edge case when the doubly linked list is NULL*/
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	first_node = *head;
	new_node->next = first_node;
	first_node->prev = new_node;
	*head = new_node;

	return (new_node);
}
