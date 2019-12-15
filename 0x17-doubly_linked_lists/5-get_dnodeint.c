#include "lists.h"
/**
 * *get_dnodeint_at_index - function that returns
 * the nth node of a dlistint_t linked list.
 * @head: is ...
 * @index: is the index of the node, starting from 0
 * Return: the nth node, if the node does not exist, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index)
	{
		if (head == NULL)
		{
			return (NULL);
		}
		else
		{
			head = head->next;
		}
		i++;
	}
	return (head);
}
