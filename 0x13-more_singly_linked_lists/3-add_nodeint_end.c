#include "lists.h"

/**
 * add_nodeint_end - function that adds
 * a new node at the end of a listint_t list.
 * @head: is a pointer that points to either the first
 * node in the list or to NULL
 * @n: Assigned value to an intiger in the node that we are adding.
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else if (*head != NULL)
	{
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new_node;
	}
	return (new_node);
}
