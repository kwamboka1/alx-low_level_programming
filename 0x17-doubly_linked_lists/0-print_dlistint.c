#include "lists.h"

/**
 * print_dlistint - prints all the elements of a
 * dlistint_t list
 *
 * @h: head of the list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t all_nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		all_nodes++;
		h = h->next;
	}
	return (all_nodes);
}

