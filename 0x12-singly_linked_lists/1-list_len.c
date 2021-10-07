#include "lists.h"

/**
 *list_len - returns the number of elements in a list.
 *@h: singlly linked list.
 *
 *Return: returns number of elements in the list.
 *
 */

size_t list_len(const list_t *h)
{
	size_t j;

	j = 0;
	while (h != NULL)
	{
		h = h->next;
		j++;
	}
	return (j);
}
