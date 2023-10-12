#include "lists.h"
/**
 * free_dlistint - frees a DLL
 * @head: head node
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
