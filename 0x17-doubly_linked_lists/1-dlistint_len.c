#include "lists.h"
/**
 * dlistint_len - function that returns the number
 * of elements in a linked dlistint_t list.
 * @h: input
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *element = h;
	size_t i = 0;

	while (element != NULL)
	{
		element = element->next;
		i++;
	}
	return (i);
}
