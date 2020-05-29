#include "hash_tables.h"

/**
 * hash_table_set -
 *
 * Returns: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *ptr = NULL, *new_node = NULL;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

/*Check the index of where the key is located*/
	index = key_index((const unsigned char *)key, ht->size);
	ptr = ht->array[index];
	while(ptr)
	{
		if(strcmp(ptr->key, key) == 0)
		{
			if (ptr->value)/*checks if there is asociated to that key*/
				free(ptr->value);/*free that value and*/
			ptr->value = strdup(value);/*update the value*/
			if (!ptr->value)/*checks if no problem with malloc within strdup*/
				return (0);
			ptr->value = (char *) value;/*Assign value to the key*/
			return (1);/*return success*/
		}
		ptr = ptr->next;/*help the loop to advance to the next node*/
	}
/*In case of collision, add the new node at the beginning of the list*/
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return(0);

/*Now we will assgin */
	new_node->key = strdup(key);
	if (!new_node->key)/*checks if no problem with malloc within strdup*/
	{
		free(new_node);
		return (0);
	}
	new_node->value = strdup(value);
	if (!new_node->value)/*checks if no problem with malloc within strdup*/
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	new_node->next = ht->array[index];
	ht ->array[index] = new_node;
	return (1);
}
