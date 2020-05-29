#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @ht: is the hash table.
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i = 0, j = 0, size = 0;

	if (ht != NULL)
	{
		size = ht->size;
		printf("{");
		for (i = 0; i < size; i++)
		{
			while (ht->array[i] != NULL)
			{
				if (j == 1)
					printf(", ");
				printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
				j = 1;
				ht->array[i] = ht->array[i]->next;
			}
		}
		printf("}\n");
	}
}
