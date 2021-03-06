#include "lists.h"
/**
 * _strlen - find the length of a string so ew can use write lmao.
 * @s: string to be parsed
 * Return: numero of characters in string
 */
int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

/**
 * add_node_end - function that
 * that adds a new node at the end.
 * @head: pointer to the head of the list
 * @str: pointer to the first element of a string
 * Return: size_t return the number of elements in the list.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *temp;

	newNode = malloc(sizeof(list_t));
	if (!newNode)
	{
		return (NULL);
	}
	newNode->len = _strlen(str);
	newNode->str = strdup(str);
	newNode->next = NULL;

	if (*head == NULL)
	{
		newNode->next = *head;
		*head = newNode;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newNode;
	}
	return (newNode);
}
