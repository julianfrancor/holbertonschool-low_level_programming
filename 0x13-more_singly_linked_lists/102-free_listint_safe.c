#include "lists.h"
/**
 * free_listint_safe - function that frees a listint_t list.
 * @h: is a double pointer to the head of the list
 * Return: the size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t nodes = 0;

	if (*h == NULL)
	{
		return (0);
	}
	temp = *h;
	while (*h)
	{
		nodes++;
		temp = *h;
		if (*h - ((*h)->next) > 0)
		{
			*h = temp->next;
			free(temp);
		}
		else
		{
			break;
		}
	}
	free(*h);
	*h = NULL;
	return (nodes);
}
