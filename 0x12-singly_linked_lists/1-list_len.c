#include "lists.h"
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
