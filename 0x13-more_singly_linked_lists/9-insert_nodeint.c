#include "lists.h"
/**
 * insert_nodeint_at_index - function that
 * inserts a new node at a given position.
 * @head: input
 * @idx: input
 * @n: input
 * Return: output
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *tmp = *head;
	unsigned int i = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	else
	{
		new->n = n;
		while (head != NULL && (idx - 1) == i)
		{
			new->next = tmp->next;
			tmp->next = new;
			i++;
		}
		return (new);
	}
}
