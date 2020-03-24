#include "lists.h"
/**
 * get_nodeint_at_index -  function that returns
 * the nth node of a listint_t linked list.
 * @head: is a pointer to the head of the list
 * @index: index is the index of the node, starting at 0
 * Return: returns the nth node of a listint_t linked list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int node = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	temp = head;
	while (temp)
	{
		if (node  == index && temp)
		{
			return (temp);
		}
		temp = temp->next;
		node++;
	}
	return (temp);
}
