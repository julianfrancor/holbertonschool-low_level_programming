#include "lists.h"
/**
 * reverse_listint - function that reverses a listint_t linked list.
 * @head: is a pointer to the head of the list
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *first, *rest;

	if (*head == NULL)
	{
		return (NULL);
	}
	first = NULL;
	while (*head)
	{
		rest = (*head)->next;
		(*head)->next = first;
		first = *head;
		(*head) = rest;
	}
	*head = first;

	return (*head);
}
