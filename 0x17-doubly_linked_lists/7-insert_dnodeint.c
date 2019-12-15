#include "lists.h"
/**
 * *insert_dnodeint_at_index - function that
 * inserts a new node at a given position.
 * @h: is ...
 * @idx: is the index of the list where the new node should be added.
 * @n: is ...
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *tmp = *h;
	unsigned int i;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	else
	{
		new->n = n;
		i = 0;
		while (i < idx)
		{
			tmp = tmp->next;
			i++;
		}
		new->prev = tmp;
		new->next = tmp->next;
		tmp->next->prev = new;
		tmp->next = new;
		return (tmp);
	}
}
