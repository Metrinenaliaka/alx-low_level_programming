#include "lists.h"
/**
 * free_list - function that frees a list_t list.
 * @head: head node
 */
void free_list(list_t *head);
{
	list_t *p;

	for (p = head; p != NULL; p = head)
	{
		head = p->next;
		free(p->str);
		free(p);
	}
}
