#include "lists.h"

/**
 * add_nodeint - function that adds
 * a new node at the beginning of a listint_t list.
 * @head: is a pointer that points to either the first
 * node in the list or to NULL
 * @n: Assigned value to an intiger in the node that we are adding.
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
