#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes the
 * node at index index of a listint_t linked list.
 * @head: input
 * @index: input
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *before;
	listint_t *after;

	if (*head == NULL)
	{
		return (-1);
	}

}
