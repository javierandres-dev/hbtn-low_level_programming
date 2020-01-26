#include "hash_tables.h"
/**
 * hash_tablet_set - function that adds an element to the hash table
 * @key: is the key. key can not be an empty string
 * @value: is the value associated with the key.
 * value must be duplicated. value can be an empty string
 * Returns: 1 if it succeeded, 0 otherwise
 * In case of collision, add the new node at the beginning of the list
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	hash_node_t *aux;
	unsigned long int index = 0;

	if (ht == NULL || key == NULL || value == NULL || strlen(key) == 0)
	{
		return (0);
	}
	index  = key_index((unsigned char *)key, ht->size);
	aux = ht->array[index];
	while (aux && strcmp(aux->key, key) != 0)
	{
		aux = aux->next;
	}
	if (aux)
	{
		free(aux->value);
		aux->value = strdup(value);
		if (aux->value == NULL)
		{
			return (0);
		}
		return (1);
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(new);
		return (0);
	}
	new->next = ht->array[index];
	ht->array[index] = new;
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = strdup(value);
	if (new->value == NULL)
	{
		free(new->key);
		free(new);
		return (0);
	}
	return (1);
}
