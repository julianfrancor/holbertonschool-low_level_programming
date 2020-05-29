#include "hash_tables.h"


/**
 * free_list - function that
 * frees a list_t list.
 * @head: pointer to the head of the list
 * Return: void
 */
void free_list(hash_node_t *head)
{
	hash_node_t *temp;

	temp = head;
	while (head)
	{

		temp = head;
		head = head->next;
		/*freeing the content*/
		if (temp->key)
			free(temp->key);
		if (temp->value)
			free(temp->value);
		free(temp);
	}
}

/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: is the hash table
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i = 0, size;

	if (ht == NULL)
		return;

	size = ht->size;
	for (i = 0; i < size; i++)
	{
		if (ht->array[i] != NULL)
		{
			free_list(ht->array[i]);
		}
	}
	free(ht->array);
	free(ht);
}
