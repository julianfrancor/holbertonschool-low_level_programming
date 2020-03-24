#include "lists.h"
/**
 * sum_listint - function that returns the sum of all
 * the data (n) of a listint_t linked list.
 * @head: is a pointer to the head of the list
 * Return: int sum of all the data (n) of a listint_t
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	unsigned int node = 0, sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
		node++;
	}
	return (sum);
}
