#include "lists.h"
/**
 * free_list - function that frees a list_t list.
 * @head: head node
 */
void free_list(list_t *head)
{
	list_t *p;

	p = head;
	while (p != NULL)
	{
		head = p->next;
		free(p->str);
		free(p);
		p = head;
	}
}
