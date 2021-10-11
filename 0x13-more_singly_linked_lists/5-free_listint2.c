#include "lists.h"

/**
 *free_listint2 - frees a linked list
 *@head: head of a list.
 *
 *Return:  no return.
*/

void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *j;

	if (head != NULL)
	{
		j = *head;
		while ((temp = j) != NULL)
		{
			j = j->next;
			free(temp);
		}
		*head = NULL;
	}
}
