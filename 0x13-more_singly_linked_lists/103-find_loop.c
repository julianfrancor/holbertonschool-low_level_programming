#include "lists.h"
/**
 * find_listint_loop - function that finds the loop in a linked list.
 * @head: is a pointer to the head of the list
 * Return: The address of the node where the loop starts, or
 * NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *nodeloop;

	if (head == NULL)
	{
		return (0);
	}
	if (head == head->next)
	{
		return (head);
	}
	while (head)
	{
		if (head - head->next > 0)
		{
			head = head->next;
		}
		else
		{
			nodeloop = head->next;
			return (nodeloop);
		}
	}
	return (0);
}
