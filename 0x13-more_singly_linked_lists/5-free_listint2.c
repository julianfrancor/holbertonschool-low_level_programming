#include "lists.h"
/**
 * free_listint2 - function that
 * frees a list_t list.
 * @head: is a double pointer to the head of the list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	temp = *head;

	while (*head)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
	}
	*head = NULL;
}
