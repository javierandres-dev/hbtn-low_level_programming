#include "lists.h"
/**
 * sum_dlistint - function that returns the sum of
 * all the data (n) of a dlistint_t linked list.
 * @head: is ...
 * Return: the sum, if the list is empty, return 0
 */
int sum_dlistint(dlistint_t *head)
{
	int i;

	if (head == NULL)
	{
		return (0);
	}
	else
	{
		i = 0;
		while (head != NULL)
		{
			i = i + head->n;
			head = head->next;
		}
		return (i);
	}
}
