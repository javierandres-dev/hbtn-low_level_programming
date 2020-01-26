#include "hash_tables.h"
/**
 * hash_table_delete - function that deletes a hash table
 * @ht: is the hash table
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp1;
	hash_node_t *tmp2;
	unsigned int i;

	if (ht == NULL)
	{
		return;
	}
	i = 0;
	while (i < ht->size)
	{
		tmp1 = ht->array[i];
		while (tmp1)
		{
			tmp2 = tmp1->next;
			free(tmp1->key);
			free(tmp1->value);
			free(tmp1);
			tmp1 = tmp2;
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
