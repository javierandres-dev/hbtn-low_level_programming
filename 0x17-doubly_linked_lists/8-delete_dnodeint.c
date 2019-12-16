#include "lists.h"
/**
 * delete_dnodeint_at_index - function that deletes
 * the node at index index of a dlistint_t linked list.
 * @head: is ...
 * @index:  is the index of the node that should be deleted. Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;
	unsigned int i = 0;

	if (tmp == NULL || head == NULL)
	{
		return (-1);
	}
	while (i != index)
	{
		tmp = tmp->next;
		i++;
	}
	if (i == 0)
	{
		*head = tmp->next;
	}
	if (tmp->next != NULL)
	{
		tmp->next->prev = tmp->prev;
	}
	if (tmp->prev != NULL)
	{
		tmp->prev->next = tmp->next;
	}
	free(tmp);
	return (1);
}
