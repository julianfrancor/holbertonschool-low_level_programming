#include "lists.h"

/**
 * free_dlistint - function that
 * frees a doubly linked list dlist_t.
 * @head: pointer to the head of the list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	temp = head;
	while (head)
	{
		temp = head;
		head = head->next;
		/*freeing the memory allocated with malloc */
		free(temp);
	}
	/*frees the last memory allocation*/
	free(head);
}
