#include "lists.h"
/**
 * find_listint_loop - function that finds the loop in a linked list.
 * @head: is a pointer to the head of the list
 * Return: The address of the node where the loop starts, or
 * NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *node1, *node2;

	node1 = head;
	node2 = head;
	while (node1 && node2 && node2->next)
	{
		if (node1 == node2)
		{
			return (node1);
		}
	}
	return (NULL);
}
