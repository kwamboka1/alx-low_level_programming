#include "lists.h"

/**
 * insert_dnodeint_at_index - Insert a new node at index @idx
 *
 * @h: The node to be inserted.
 * @idx: Index of the list where the new node should be added.
 * @n: The value in the node.
 *
 * Return: Address of the new node, or NULL upon failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h, *new_node;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (idx != 1)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
		idx--;
	}

	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = temp;
	new_node->next = temp->next;
	temp->next->prev = new_node;
	temp->next = new_node;

	return (new_node);
}
