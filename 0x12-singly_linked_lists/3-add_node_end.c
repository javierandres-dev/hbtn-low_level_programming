#include "lists.h"
/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 * @head: call struct
 * @str: argument
 * Return: Always
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	int i = *head;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	else
	{
		new->str = strdup(str);
		new->next = *head;
		*head = new;
		while (i->next != NULL)
		{
			i = i->next;
		}
		i->next = new;
	}
	return (*head);
}
