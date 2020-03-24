#include "lists.h"
/**
 * pop_listint - function that deletes the head node
 * of a listint_t linked list, and
 * @head: is a double pointer to the head of the list
 * Return: returns the head node’s data (n) and if the
 * linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int node_value;

	if (*head == NULL)
	{
		return (0);
	}
	temp = *head;
	node_value = temp->n;
	*head = temp->next;
	free(temp);

	return (node_value);
}
