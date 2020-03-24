#include "lists.h"
/**
 * insert_nodeint_at_index - function that inserts a new node
 * at a given position.
 * @head: is a pointer to the head of the list
 * @idx: index of the list where the new node will be added.
 * @n: is the number to be added within the new node.
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *aux2, *aux1;
	unsigned int indice = 0, totalnodes = 0;

	if (*head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	aux1 = *head;
	while (aux1)
	{
		aux1 = aux1->next;
		totalnodes++;
	}
	if (totalnodes < idx)
		return (NULL);
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	aux1 = *head;
	while (aux1)
	{
		aux2 = aux1;
		aux1 = aux1->next;
		indice++;
		if (indice == idx)
		{
			new_node->next = aux1;
			aux2->next = new_node;
			return (new_node);
		}
	}
	return (new_node);
}
