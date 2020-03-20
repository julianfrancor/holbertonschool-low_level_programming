#include "lists.h"
/**
 * free_list - function that
 * frees a list_t list.
 * @head: pointer to the head of the list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp;

	temp = head;
	while (head)
	{
		temp = head;
		head = head->next;
		/**
		*freeing the content
		*/
		free(temp->str);
		/**
		*freeing the memory allocated with malloc
		*/
		free(temp);
	}
	/**
	 * freees the las memory allocation
	 */
	free(head);
}
