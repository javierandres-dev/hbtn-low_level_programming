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

	if (*head == NULL)
		return (-1);
	if (index == 0 && tmp->next != NULL)
	{
		*head = tmp->next;
		(*head)->prev = NULL;
		free(tmp);
		return (1);
	}
	if (index == 0 && tmp->next == NULL)
	{
		*head = NULL;
		free(tmp);
		return (1);
	}
	while (tmp->next != NULL && i < index)
	{
		tmp = tmp->next;
		i++;
	}
	if (i + 1 < index)
		return (-1);
	tmp->prev->next = tmp->next;
	tmp->next->prev = tmp->prev;
	free(tmp);
	return (1);
}
