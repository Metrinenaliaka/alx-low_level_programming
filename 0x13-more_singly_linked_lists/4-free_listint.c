#include "lists.h"
/**
 * free_listint - function that frees a listint_t list.
 * @head: head node
 */
void free_listint(listint_t *head)
{
	listint_t *p;

	p = head;
	while (p != NULL)
	{
		head = p->next;
		free(p);
		p = head;
	}
}
