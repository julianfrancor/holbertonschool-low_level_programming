#include "lists.h"
/**
 * print_listint_safe - function that reverses a listint_t linked list.
 * @head: is a pointer to the head of the list
 * Return: a pointer to the first node of the reversed list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head)
	{
		nodes++;
		printf("[%p] ", (void *)head);
		printf("%d\n", head->n);
		if (head - head->next > 0)
		{
			head = head->next;
		}
		else
		{
			printf("-> [%p] ", (void *)head->next);
			printf("%d\n", head->next->n);
			break;
		}
	}
	return (nodes);
}
