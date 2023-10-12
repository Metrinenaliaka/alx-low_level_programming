#include "lists.h"
/**
 *
 *
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	ptr = head;
	while (ptr)
	{
		head = ptr->next;
/*		free(ptr->n);*/
		free(ptr);
		ptr = head;
	}
}
