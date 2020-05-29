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
			if (ht->array[i] != NULL)
			{
				if (j > 0)
					printf(", ");
				printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
				j++;
			}
		}
		printf("}\n");
	}
}
