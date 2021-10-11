#include "lists.h"


/**
 *pop_listint - delete the head node of a linked list
 *@head: head of a list.
 *
 *Return: head node's data.
 *
 */

int pop_listint(listint_t **head)
{
	int hnode;
	listint_t *h;
	listint_t *j;

	if (*head == NULL)
		return (0);

	j = *head;

	hnode = j->n;

	h = j->next;

	free(j);

	*head = h;

	return (hnode);
}
