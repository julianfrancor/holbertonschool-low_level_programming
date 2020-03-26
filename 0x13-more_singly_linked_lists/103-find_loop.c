#include "lists.h"
/**
 * find_listint_loop - function that finds the loop in a linked list.
 * @head: is a pointer to the head of the list
 * Return: The address of the node where the loop starts, or
 * NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *temp, *temp2;

	if (head == NULL)
	{
		return (0);
	}
	if (head == head->next)
	{
		return (head);
	}
	temp = head;
	temp2 = head;
	while (temp)
	{
		temp = temp->next;
		temp2 = head;
		while ((temp != NULL) && (temp2 != temp))
		{
			if (temp2 == temp->next)
			{
				return (temp2);
			}
			temp2 = temp2->next;
		}
	}
	return (temp);
}
