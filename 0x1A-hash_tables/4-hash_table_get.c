#include "hash_tables.h"
/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht: is the hash table you want to look into
 * @key: is the key you are looking for
 * Return: the value associated with the element,
 * or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp;
	unsigned long int index = 0;

	if (ht == NULL || key == NULL || strlen(key) == 0)
	{
		return (NULL);
	}
	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		return (NULL);
	}
	tmp = ht->array[index];
	while (tmp && strcmp(tmp->key, key) != 0)
	{
		tmp = tmp->next;
	}
	if (tmp)
	{
		return (tmp->value);
	}
	return (NULL);
}
