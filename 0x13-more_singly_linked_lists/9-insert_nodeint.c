#include "lists.h"
/**
 * insert_nodeint_at_index - function that inserts a new node
 * at a given position.
 * @head: is a pointer to the head of the list
 * @idx: idx is the index of the list where the new
 * node should be added. Index starts at 0
 * @n: is the number to be added within the new node.
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp, *sectemp;
	unsigned int node = 0;

	if (*head == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	sectemp = *head;
	while (sectemp)
	{
		if (node  == idx)
		{
			temp->next = new_node;
			new_node->next = sectemp;
			return (new_node);
		}
		temp = sectemp;
		sectemp = temp->next;
		node++;
	}
	return (new_node);
}
