#include "hash_tables.h"


shash_table_t *shash_table_create(unsigned long int size)
{
    shash_table_t *table = NULL;

	if (size < 1)
		return (NULL);
	/*first malloc to create the table*/
	table = calloc(1, sizeof(shash_table_t));
	if (!table)
		return (NULL);
	table->size = size;
	/*second malloc to create the space for the nodes inside*/
	/*each position in the table and multiply it for the size*/
	table->array = calloc(size, sizeof(shash_node_t *));
	if (!table->array)
	{
		free(table);
		return (NULL);
	}
	return (table);
}

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *ptr = NULL, *new_node = NULL;

	if (ht == NULL || key == NULL || (strcmp(key, "") == 0) || value == NULL)
		return (0);
/*Check the index of where the key is located*/
	index = key_index((const unsigned char *)key, ht->size);
	ptr = ht->array[index];
	while (ptr)
	{
		if (strcmp(ptr->key, key) == 0)
		{
			if (ptr->value)/*checks if there is asociated to that key*/
				free(ptr->value);/*free that value and*/
			ptr->value = strdup(value);/*update the value*/
			if (!ptr->value)/*checks if no problem with malloc within strdup*/
				return (0);
			return (1);/*return success*/
		}
		ptr = ptr->next;/*help the loop to advance to the next node*/
	}
	new_node = calloc(1, sizeof(shash_node_t)); /*In case of collision, add node */
	if (!new_node)
		return (0);
	new_node->key = strdup(key);/*Now we will assgin */
	if (!new_node->key)/*checks if no problem with malloc within strdup*/
	{ free(new_node);
	return (0); }
	new_node->value = strdup(value);
	if (!new_node->value)/*checks if no problem with malloc within strdup*/
	{ free(new_node->key);
	free(new_node);
	return (0); }
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (double_slist(ht, new_node));
}

int double_slist(shash_table_t *ht, shash_node_t *new)
{
    shash_node_t *aux = NULL;

    if (ht->shead == NULL)/*Check if the head of the doubly linked list is null*/
    {
    /*if it's null is beacuse the table is empty*/
    /*So we connect the new node to the head and the tail*/
        ht->shead = new;
        ht->stail =  new;
        return (1);/*return 1 when succeded*/
    }
    else/*if the list is not empty*/
    {
        aux = ht->shead; /*we set the aux to the head to start running the doubly*/
        if (strcmp(new->key, aux->key) < 0)
        {
            new->snext = aux;
            new->sprev = NULL;
            aux->sprev = new;
            ht->shead = new;
            return(1);
        }
    }
    while (aux->snext && strcmp(new->key, aux->key) > 0)/*he will stop where he has to conect the new node to*/
    {
        aux = aux->snext;
    }
    /*add the new node at the end of the doubly linked list*/
    if (aux->snext == NULL && strcmp(new->key, aux->key) > 0)
    {
        new->sprev = aux;
        aux->snext = new;
        ht->stail = new;
        return (1);
    }
    /*to add node in the middle*/
    new->snext = aux;
    aux->sprev->snext = new;
    new->sprev = aux->sprev;
    aux->sprev = new;
    return (1);
}


char *shash_table_get(const shash_table_t *ht, const char *key)
{
	int idx;

	if (ht == NULL || key == NULL || (strcmp(key, "") == 0))
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	while (ht->array[idx])
	{
		if (strcmp(ht->array[idx]->key, key) == 0)
			return (ht->array[idx]->value);
		ht->array[idx] = ht->array[idx]->next;
	}
	return (NULL);
}

void shash_table_print(const shash_table_t *ht)
{
    unsigned int j = 0;
    shash_node_t *aux = NULL;

	if (ht != NULL)
	{
        aux = ht->shead;
        printf("{");
		while (aux)
		{
				if (j == 1)
					printf(", ");
				printf("'%s': '%s'", aux->key, aux->value);
				j = 1;
				aux = aux->next;
		}
		printf("}\n");
	}
}
void shash_table_print_rev(const shash_table_t *ht)
{
    unsigned int j = 0;
    shash_node_t *aux = NULL;


	if (ht != NULL)
	{
        aux = ht->stail;
        printf("{");
		while (aux)
		{
				if (j == 1)
					printf(", ");
				printf("'%s': '%s'", aux->key, aux->value);
				j = 1;
				aux = aux->sprev;
		}
		printf("}\n");
	}

}


/**
 * free_list - function that
 * frees a list_t list.
 * @head: pointer to the head of the list
 * Return: void
 */
void free_list(shash_node_t *head)
{
	shash_node_t *temp;

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



void shash_table_delete(shash_table_t *ht)
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
