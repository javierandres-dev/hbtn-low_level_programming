#include "lists.h"
/**
 * *add_dnodeint_end - function that adds a
 * new node at the end of a dlistint_t list.
 * @head: is...
 * @n: is ...
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *tmp = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	else
	{
		new->n = n;
		if (tmp == NULL)
		{
			new->prev = NULL;
			*head = new;
		}
		else
		{
			while (tmp->next != NULL)
			{
				tmp = tmp->next;
			}
			new->prev = tmp;
			tmp->next = new;
		}
		new->next = NULL;
	}
	return (new);
}
