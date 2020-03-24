#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes the node at index index of a
 * listint_t linked list.
 * @head: is a pointer to the head of the list
 * @index: is the index of the node that should be deleted. Index starts at 0.
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *delete;
	unsigned int nodes = 1;

	if (head == NULL)
		return (-1);

	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	temp = *head;
	while (nodes < index)
	{
		temp = temp->next;
		if (temp == NULL)
		{
			return (-1);
		}
		nodes++;
	}

	delete = temp;
	delete = delete->next;
	temp->next = delete->next;

	free(delete);

	return (1);
}
